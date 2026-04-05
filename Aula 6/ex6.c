#include <stdio.h>

#define N_TERMOS 12000

int main()
{
    double soma1,soma0,soma;

    soma0=1;
    for(int i=5; i<=(N_TERMOS+1)/2; i+=4)
    {
        soma0+=1.0/(i);
    }

    printf("%lf\n",soma0);

    soma1=0;
    for(int j=3; j<=(N_TERMOS-1)/2; j+=4)
    {
        soma1+=1.0/(j);
    }

    printf("%lf\n",soma1);


    soma=4.0*(soma0-soma1);

    printf("%lf",soma);

}
