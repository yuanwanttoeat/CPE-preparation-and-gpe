#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
#define N 1000
int prime[1000]={0};
vector<int> v;

int main()
{
    int i,j;

    for(i=2;i<N;i++){
        if(prime[i]==0){
            v.push_back(i);

            for(j=2*i;j<N;j+=i){
                prime[j]=1;
            }
        }

    }

    /*for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";*/

    int f,base,power;
    cin>>f;

        for(i=0;i<v.size();i++){
            base=v[i];
            power=0;
            while(f%base==0){
                f/=base;
                power++;
            }
            if(power!=0 ){
                if(f!=1)
                    cout<<base<<"^"<<power<<"*";
                else
                    cout<<base<<"^"<<power<<endl;
            }
            if(f==1)
                break;

        }




    return 0;
}
