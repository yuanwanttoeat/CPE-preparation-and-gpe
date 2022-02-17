#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[20];
    int arr[20],ans[20];
    int i,j,len,sum,tmp;
    int carry_be,carry_af;

    while(scanf("%s %d %d",str,&carry_be,&carry_af )!=EOF)
    {
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]>='0' && str[i]<='9')
                arr[i]=str[i]-'0';
            else
                arr[i]=str[i]-'A'+10;
        }
        sum=0;
        for(i=0; i<len; i++)
        {
            sum+=pow(carry_be,len-1-i)*arr[i];
        }
        //printf("%d\n",sum);

        tmp=0;//how many digits
        i=0;
        while(sum>=carry_af)
        {
            ans[i]=sum%carry_af;
            sum=sum/carry_af;
            i++;
            tmp++;
        }
        ans[i]=sum;
        if(sum!=0)
            tmp++;
        if(tmp>7)
        {
            printf("  ERROR");
        }
        else
        {
            for(i=6; i>=0; i--)
            {
                if(i>=tmp)
                    str[i]=32;
                else if(ans[i]>9)
                    str[i]=ans[i]-10 +'A';
                else
                    str[i]=ans[i]+'0';

                    printf("%c",str[i]);
            }
        }

        printf("\n");

    }


    return 0;
}
