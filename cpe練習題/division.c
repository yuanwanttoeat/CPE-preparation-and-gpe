#include <stdio.h>
#include <math.h>
int arr[12];
int flag=0;

void find(int arr[],int index,int div)
{
    int sum,i,j,k;
    int tmp;
    for(i=1; i<index; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(arr[i]==arr[j])
                return;
        }
    }

    if(index==5)
    {
        sum=0;
        for(i=0; i<5; i++)
            sum+=pow(10,4-i)*arr[i];

        if(sum*div>=100000)
            return;
        else
        {
            tmp=sum*div;
            i=9;
            while(tmp>0)
            {
                arr[i]=tmp%10;
                i--;
                tmp=tmp/10;
            }

            for(i=1; i<10; i++)
            {
                for(j=i-1; j>=0; j--)
                {
                    if(arr[i]==arr[j])
                        return;
                }
            }

            flag=1;
            printf("%d%d%d%d%d / %d%d%d%d%d = %d \n",arr[5],arr[6],arr[7],arr[8],arr[9],arr[0],arr[1],arr[2],arr[3],arr[4],div);
        }
    }
    else
    {
        for(k=0; k<=9; k++)
        {
            arr[index]=k;
            find(arr,index+1,div);
        }

    }

}


int main()
{
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        flag=0;
        if(n==0)
            break;
        else if(n<2 || n>79)
        {
            printf("There are no solutions for %d.",n);
        }
        else
        {
            for(i=0; i<=9; i++)
            {
                arr[0]=i;
                find(arr,1,n);
            }
        }

        if(flag==0)
            printf("There are no solutions for %d.\n\n",n);
        else
            printf("\n");

        for(i=0; i<10; i++)
            arr[i]=0;

    }

    return 0;
}
