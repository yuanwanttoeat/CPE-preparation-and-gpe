#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int s[N];
int length[N];
// »¼°jª©¥»
void print_LIS(int i)
{
    if (i == -1) {cout << '\n'; return;}

    for (int j=0; j<i; ++j)
        if (s[j] < s[i])
            if (length[j] + 1 == length[i])
            {
                print_LIS(j);
                cout << s[i];
            }
}
void LIS()
{
    for (int i=0; i<N; i++) length[i] = 1;

    for (int i=0; i<N; i++)
        for (int j=i+1; j<N; j++)
            if (s[i] < s[j])
                length[j] = max(length[j], length[i] + 1);

    int l = 0;
    for (int i=0; i<N; i++)
        if (length[i] > l)
            l = length[i];

    for (int i=0; i<N; i++)
        if (length[i] == l)
            print_LIS(i);
}



int main()
{
    int n,data_num;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>data_num;
        for(int j=0;j<data_num;j++){
            cin>>s[j];
        }
        LIS();
    }

    return 0;
}
