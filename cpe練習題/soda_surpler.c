#include <stdio.h>

int main()
{
    int N;
    int e,f,c;
    int rel,left,tmp;
    int i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        rel=0;
        scanf("%d %d %d",&e,&f,&c);

        left=e+f;
        while(left>=c){
            tmp=left/c;
            rel+=left/c;

            left=left%c;
            left+=tmp;

        }
        printf("%d\n",rel);
    }

    return 0;
}
