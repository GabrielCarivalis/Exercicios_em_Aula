#include <stdio.h>

int main()
{

    int numero;
    scanf("%d",&numero);

    int unidade=(numero%100)%10;

    int dezena=((numero%100)-unidade)/10;

    int centena=((numero)-(dezena+unidade))/100;

    if(unidade==0)
    {
    printf("%d%d",dezena,centena);
    }

    else
    {
    printf("%d%d%d",unidade,dezena,centena);
    }

}
