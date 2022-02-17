#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    int i,j,k,len,num;
    int index;
    char s[50];

    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%s",s);

        printf("Case %d: ",i);

        len=strlen(s);

        for(j=0;j<len;j++){
            num=0;
            if(s[j]>='A' && s[j]<='Z'){
                index=j;
                j++;
                while((s[j]<'A' || s[j]>'Z')&&j<len){
                    num*=10;
                    num+=s[j]-'0';
                    j++;
                }
                for(k=0;k<num;k++)
                    printf("%c",s[index]);
                j--;
            }

        }
        printf("\n");
    }

    return 0;
}
