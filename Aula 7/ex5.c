#include <stdio.h>

int main()
{
    int num,anterior;
    int sequencia=1,maior=1;

    scanf("%d",&num);

    while(num>0)
    {
        anterior=num;
        scanf("%d",&num);

        if(num>anterior)//ordem crescente em ação
        {
            sequencia++;
        }

        else if(1)
        {
            sequencia=1;
        }

        if(sequencia>maior)
        {
            maior=sequencia;
        }
    }
   
    printf("quantidade de numeros na maior sequencia crescente:%d",maior);

    return 0;
}
