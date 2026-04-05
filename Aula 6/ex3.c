#include <stdio.h>

int main()
{

    float soma=0,n;
    float maior=0,menor=10;

    for(int i=0;i<=5;i++)
    {
        scanf("%f",&n);
        soma+=n;

        if(n<=menor)
        {
            menor=n;
        }

        if(n>=maior)
        {
            maior=n;
        }
    }

    printf("%.2f",(soma-maior-menor)/4);

    return 0;
}