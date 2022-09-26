#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int Mod(long long int base,long long int p,int m)
{
    if(p==0) return 1;
    else if(p==1) return base;
    else{
        long long int xk=Mod(base,p/2,m)%m;
        if(p%2==0)
            return xk*xk%m;
        else
            return xk*xk*base%m;
    }
}

int main()
{
    long long int B,p;
    int m;
    while(cin>>B>>p>>m){
        cout<<Mod(B,p,m)<<endl;
    }
    return 0;
}
