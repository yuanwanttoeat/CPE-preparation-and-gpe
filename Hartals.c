#include <stdio.h>

int main()
{
    int T;
    int N,P;
    int arr[3655],party[100];
    scanf("%d",&T);
    int i,j,k;
    for(k=0;k<T;k++){
        scanf("%d",&N);
        for(i=0;i<=N;i++)
            arr[i]=0;

        scanf("%d",&P);
        for(i=0;i<P;i++)
            scanf("%d",&party[i]);

        for(i=0;i<P;i++){
            for(j=1;j*party[i]<=N;j++){
                arr[ j*party[i]-1 ]=1;
            }
        }

        for(i=0;i<=N;i++)
            if(i%7==5 || i%7==6)
                arr[i]=0;

        int sum=0;
        for(i=0;i<=N;i++)
            sum+=arr[i];

        printf("%d\n",sum);
    }


    return 0;
}
