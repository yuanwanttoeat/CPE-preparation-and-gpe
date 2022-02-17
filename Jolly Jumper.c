#include <stdio.h>

int main()
{
    int n;
    int arr[3000],tf[3000];
    int i,j,flag=0;
    while(scanf("%d",&n)!=EOF)
    {
        flag=1;
        for(i=1; i<n; i++)
            tf[i]=0;

        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

        for(i=0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
                j=arr[i+1]-arr[i];
            else
                j=arr[i]-arr[i+1];

            if(j>=n)
            {
                flag=0;
                break;
            }
            else
                tf[j]=1 ;

        }
        if(flag==0)
            printf("Not jolly\n");
        else
        {
            for(i=1; i<n; i++)
                if(tf[i]!=1)
                {
                    flag=0;
                    printf("Not jolly\n");
                    break;
                }

        }

        if(flag==1)
            printf("Jolly\n");

    }
    return 0;
}
