#include <stdio.h>

int main()
{
    int i=1,j=0;
    float soma=0,a;

    while(i<=10)
    {
        scanf("%f",&a);
        if(a<20)
        {
            soma+=a;
            j++;
        }
        i++;
    }

    soma = soma/(float)j;
    printf("%.2f",soma);

    return 0;
}
