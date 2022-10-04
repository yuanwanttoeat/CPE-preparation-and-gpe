#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 32

char path[N][N][N]={'#'};
struct pos
{
    int l,r,c,val;
    pos(int l, int r, int c, int value):
    l(l), r(r), c(c), val(value) {}
};

int BFS(int l,int r, int c,int L,int R,int C)
{
    queue<pos> q;
    q.push(pos(l,r,c,0));

    while(!q.empty()){
        struct pos p=q.front();
        if(p.l<0 || p.r<0 || p.c<0
            || p.l>=L || p.r>=R || p.c>=C){
            q.pop();
            continue ;// outside the range
        }
        if(path[p.l][p.r][p.c]=='E'){
            return p.val;
        }

        if(path[p.l][p.r][p.c]!='.'){
            q.pop();
            continue;
        }

        path[p.l][p.r][p.c]='#';
        q.push(pos(p.l+1,p.r,p.c,p.val+1));
        q.push(pos(p.l-1,p.r,p.c,p.val+1));
        q.push(pos(p.l,p.r+1,p.c,p.val+1));
        q.push(pos(p.l,p.r-1,p.c,p.val+1));
        q.push(pos(p.l,p.r,p.c+1,p.val+1));
        q.push(pos(p.l,p.r,p.c-1,p.val+1));

        q.pop();
    }

    return -1;


    // outside the range

    //

}

int main()
{
    int L,R,C,x;
    while(cin>>L>>R>>C){
        if(L==0 && R==0 && C==0)
            break;

        int start_l,start_r,start_c;
        for(int i=0;i<L;i++){
            for(int j=0;j<R;j++){
                for(int k=0;k<C;k++){
                    cin>>path[i][j][k];
                    if(path[i][j][k]=='S'){
                        start_l=i;
                        start_r=j;
                        start_c=k;
                        path[i][j][k]='.';                    }
                }
            }
        }

        int x=BFS(start_l,start_r,start_c,L,R,C);

        if(x!=-1)
            cout<<"Escaped in "<<x<<" minute(s)\n";
        else
            cout<<"Trapped\n";
    }




    return 0;
}
