#include <stdio.h>

int main()
{
    long long int min,max;
    long long int count_a=0,count_b=0,ans=0;

    while(1){
        scanf("%lld %lld",&min,&max);
        count_a=0,count_b=0;

        if(min==0 && max==0){
            break;
        }
        else{

            count_a+=min/5;

            count_b+=max/5;

            ans=count_b-count_a+1;

            printf("%lld\n",ans);

        }
    }

    return 0;
}
