#include <stdio.h>

#define N 1000
#define MENOR 1
#define IGUAL 2 
#define MAIOR 3

int main()
{
    int n;
    int high=N,low=0;
    int resposta=1,palpites=0;

    while(resposta!=IGUAL)
    {
        n=(high+low)/2;
        printf("%d\n",n);
        scanf("%d",&resposta);
        palpites++;

        if(resposta==MENOR)
        {
            high=n-1;
        }

        else if(resposta==MAIOR)
        {
            low=n+1;

        }
    }

    printf("\nseu numero:%d",n);
    printf("\nnumero de palpites:%d",palpites);

    return 0;

    }

