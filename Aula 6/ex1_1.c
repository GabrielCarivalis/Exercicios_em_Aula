#include <stdio.h>

int main()
{
    int j=0;
    float soma=0,a;

    for(int i=1; i<=10; i++)
    {
        scanf("%f",&a);

        if(a<20)
        {
            soma+=a;
            j++;
        }
    }

    soma=soma/(float)j;

    printf("%.2f",soma);

    return 0;
}

