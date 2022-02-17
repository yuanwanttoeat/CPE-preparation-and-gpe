#include <stdio.h>

int main()
{
    int a1,a2;
    int arr1[20],arr2[20];
    int len1,len2;
    int i,t,big,carry;
    while(1){
        scanf("%d %d",&a1,&a2);
        if(a1==0 && a2==0)
            break;
        for(i=0;i<20;i++){
            arr1[i]=0;
            arr2[i]=0;
        }

        i=0;
        carry=0;
        len1=0;


        while(a1>0){
            arr1[i]=a1%10;
            a1=a1/10;
            i++;
            len1++;
        }
        i=0;
        len2=0;
        while(a2>0){
            arr2[i]=a2%10;
            a2=a2/10;
            i++;
            len2++;
        }

        big=len1;
        if(len2>len1)
            big=len2;

        for(i=0;i<big;i++){
            arr1[i]+=arr2[i];

            if(arr1[i]>9){
                arr1[i+1]+=arr1[i]/10;
                arr1[i]=arr1[i]%10;

                carry++;
            }
        }
        /*for(i=len1;i>=0;i--)
            printf("%d",arr1[i]);
        printf("\n");*/
        if(carry==0)
            printf("No carry operation.\n");
        else if(carry==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",carry);
    }


    return 0;
}
