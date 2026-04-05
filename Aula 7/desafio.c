#include <stdio.h>

#define N 100
#define MENOR 1
#define IGUAL 2
#define MAIOR 3

int main()
{
    int n=N/2;
    int resposta=0,chute=0,valor_anterior=0,valor_anterior1=N;


    while(resposta!=2)
    {
        printf("%d\n",n);
        scanf("%d",&resposta);

        if(resposta==1)
        {
            valor_anterior1=n;
            n=(n+valor_anterior)/2;
        }

        else if(resposta==3)
        {
            valor_anterior=n;
            n=(valor_anterior1+n)/2;
        }

        chute++;
    }

    printf("palpites:%d\n",chute);
    printf("numero:%d\n",n);

    return 0;
}




