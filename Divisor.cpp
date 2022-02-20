#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int prime[32000];
vector<int> v;
int main()
{
    int N,L,U;
    int i,j;


    for(i=2; i<32000; i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(j=2*i; j<32000; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    cin>>N;
    while(N--)
    {
        cin>>L>>U;
        int mx=0,index=0;

        for(i=L;i<=U;i++){
            int n=i,cnt=1;

            for(auto b:v){
                int p=0;
                while(n%b==0){
                    p++;
                    n/=b;
                }
                cnt*=(p+1);
                if(n==1)
                    break;
            }
            if(cnt>mx){
                mx=cnt;
                index=i;
            }
        }

        cout<<"Between "<<L<<" and "<<U<<", "<<index<<" has a maximum of "<<mx<<" divisors.\n";

    }


    return 0;
}
