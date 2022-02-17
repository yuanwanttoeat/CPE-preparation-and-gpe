#include <stdio.h>
#include <math.h>

int main()
{
    int S;
    int N,i,number;
    double win,lose;
    double pro=0;



    scanf("%d",&S);
    for(i=0;i<S;i++){

        scanf("%d %lf %d",&N, &win,&number);

        lose=1-win;

        pro=(pow(lose,number-1)*win )/(1-pow(lose,N));

        printf("%.4lf \n",pro);
    }

    return 0;
}
