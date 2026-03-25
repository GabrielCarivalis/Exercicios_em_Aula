#include <stdio.h>

int main()
{

    int inicio,fim;

    scanf("%d",&inicio);
    scanf("%d",&fim);

    if((fim-inicio)>=0)
    {
        printf("%d",fim-inicio);
    }
    else
    {
        printf("%d",(fim+24)-inicio);
    }

}
