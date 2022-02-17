#include <stdio.h>

int main()
{
    int i,j,k,tmp;
    int count=0,big_len=0;
    int min,max;
    while(scanf("%d %d",&i,&j)!=EOF)
    {
        min=i;
        max=j;
        if(i>j)
        {
            min=j;
            max=i;
        }

        count=1;
        big_len=0;
        for(k=min; k<=max; k++)
        {
            tmp=k;
            while(tmp!=1)
            {
                if(tmp%2==0) tmp/=2;
                else tmp=tmp*3+1;
                count++;
            }

            if(count>big_len)
                big_len=count;

            count=1;
        }
        printf("%d %d %d\n",i,j,big_len);
    }
    return 0;
}
