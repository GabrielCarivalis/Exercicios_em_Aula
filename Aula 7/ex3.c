#include <stdio.h>

int main()
{
    int numerador,denominador;
    int quociente=0,i,resto=0;
    scanf("%d",&numerador);
    scanf("%d",&denominador);

    for(i=0; i<numerador;i+=denominador)
    {
        quociente++;
    }

    printf("%d",i);

    if(i>numerador)
    {
        quociente--;
        i-=denominador;
    }

    resto=numerador - i;

    printf("quociente:%d\n",quociente);
    printf("resto:%d",resto);

    return 0;
    

}