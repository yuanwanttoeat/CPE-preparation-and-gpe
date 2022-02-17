#include <stdio.h>

int main()
{
    int n,i,j,arr[50],t;
    int map[40]={};
    arr[1]=1; arr[2]=2;
    for(i=3;i<=40;i++)
        arr[i]=arr[i-1]+arr[i-2];


    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);

        printf("%d = ",t);

        for(j=0;j<40;j++)
            map[j]=0;

        for(j=40;j>=0;j--){
            if(t>=arr[j]){
                t-=arr[j];
                map[j]=1;
                j--;
            }
        }
        j=39;
        while(map[j]==0)
            j--;

        for(;j>0;j--)
            printf("%d",map[j]);

        printf(" (fib)\n");
    }


    return 0;
}
