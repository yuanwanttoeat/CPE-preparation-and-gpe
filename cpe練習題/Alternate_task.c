#include <stdio.h>
#include <math.h>

int main()
{
    int S;
    int i,j;
    int sum;
    int index=1,flag=0;
    while(1)
    {
        scanf("%d",&S);
        sum=0;
        flag=0;
        if(S==0)
            break;
        if(S==1){
            printf("Case %d: 1\n",index);
            index++;
            continue;
        }

        for(i=S-1; i>=1; i--)
        {
            sum=0;
            for(j=1; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    sum+=j;
                    if(j*j!=i)
                        sum+=i/j;
                }

            }
            if(sum==S)
            {
                flag=1;
                printf("Case %d: %d\n",index,i);
                break;
            }

        }
        if(flag==0)
            printf("Case %d: -1\n",index);

        index++;
    }

    return 0;
}
