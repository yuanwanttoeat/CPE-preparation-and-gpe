#include <stdio.h>
#include <string.h>

int main()
{
    //printf("%d %d %d",'A','P','W');
    // A=65
    char str[40];
    int arr[40];
    int i,len;
    while(scanf("%s",str)!=EOF){
        len=strlen(str);

        for(i=0;i<len;i++){

            if(str[i]>=65 && str[i]<=67)
                str[i]='2';
            else if(str[i]>=68 && str[i]<=70)
                str[i]='3';
            else if(str[i]>=71 && str[i]<=73)
                str[i]='4';
            else if(str[i]>=74 && str[i]<=76)
                str[i]='5';
            else if(str[i]>=77 && str[i]<=79)
                str[i]='6';
            else if(str[i]>=80 && str[i]<=83)
                str[i]='7';
            else if(str[i]>=84 && str[i]<=86)
                str[i]='8';
            else if(str[i]>=87 && str[i]<=90)
                str[i]='9';
            else
                continue;
        }
        printf("%s\n",str);

    }



    return 0;
}
