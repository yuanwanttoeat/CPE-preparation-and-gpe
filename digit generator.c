#include <stdio.h>

int main()
{
    int T;
    int i,j,g;
    int tmp,sum,flag;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&g);
        flag=0;
        for(j=1;j<g;j++){
            sum=j;
            tmp=j;
            while(tmp>0){
                sum+=tmp%10;
                tmp=tmp/10;
            }
            if(sum==g){
                flag=1;
                printf("%d\n",j);
                break;
            }
        }
        if(flag==0)
            printf("0\n");

    }


    return 0;
}
