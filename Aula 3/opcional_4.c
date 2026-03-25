#include <stdio.h>

int main()
{

    int inicio_horas,fim_horas;
    int inicio_minutos,fim_minutos;

    scanf("%d",&inicio_horas);
    scanf("%d",&inicio_minutos);
    scanf("%d",&fim_horas);
    scanf("%d",&fim_minutos);

    if(fim_horas>=inicio_horas && fim_minutos>=inicio_minutos)
    {
        printf("%d HORAS e %d MINUTOS",fim_horas-inicio_horas,fim_minutos-inicio_minutos);
    }
    else if(fim_horas>=inicio_horas && inicio_minutos>fim_minutos)
    {
        printf("%d HORAS e %d MINUTOS",(fim_horas-inicio_horas)-1,(60+fim_minutos)-inicio_minutos);
    }
    else if(inicio_horas>fim_horas && fim_minutos>=inicio_minutos)
    {
        printf("%d HORAS e %d MINUTOS",(fim_horas+24)-inicio_horas,fim_minutos-inicio_minutos);
    }
    else
    {
        printf("%d HORAS e %d MINUTOS",(fim_horas+24)-inicio_horas-1,(60+fim_minutos)-inicio_minutos);
    }

}