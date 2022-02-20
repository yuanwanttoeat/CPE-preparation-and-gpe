#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int n,tmp,s;
    while(cin>>n){
        if(n==0)
            break;
        tmp=n;

        while(1){
            s=0;
            while(tmp>0){
                s+=tmp%10;
                tmp/=10;
            }
            if(s>=10)
                tmp=s;
            else
                break;
        }

        cout<<s<<endl;
    }


    return 0;
}
