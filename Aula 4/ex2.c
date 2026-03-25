#include <stdio.h>

int main()
{
    int dia,mes,ano,idade;

    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d",&ano);

    if(mes<3 || (mes==3 && dia<=23))
        {
            idade=2026-ano;
        }

    else
    {
        idade=2026-ano-1;
    }

    printf("%d",idade);

    return 0;

}
