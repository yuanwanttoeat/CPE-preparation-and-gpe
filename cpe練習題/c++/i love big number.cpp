#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int ans[1001];
int pd[3000]={1};

int main()
{
    int n,i,j,k;
    for(i=1;i<=1000;i++){
        for(j=0;j<3000;j++)
            pd[j]*=i;
        for(j=0;j<3000;j++){
            pd[j+1]+=pd[j]/10;
            pd[j]%=10;
        }
        for(k=0;k<3000;k++)
            ans[i]+=pd[k];
    }

    while(cin>>n)
        cout<<ans[n]<<endl;


    return 0;
}
