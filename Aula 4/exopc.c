#include <stdio.h>

int main()
{
        int num;
        scanf("%d",&num);

        int centena=num/100;
        int dezena=(num/10)%10;
        int unidade=(num%10)%10;

        int soma=(100*unidade + 10*dezena + centena) + num;
        int soma1;

        if(soma>=1000)
        {
            soma=soma%1000;

            centena=soma/100;
            dezena=(soma/10)%10;
            unidade=(soma%10)%10;

            soma1=centena + dezena*2 + unidade*3;
            soma1=soma1%10;
        }

        else
        {
            centena=soma/100;
            dezena=(soma/10)%10;
            unidade=(soma%10)%10;

            soma1=centena + dezena*2 + unidade*3;
            soma1=soma1%10;
        }

        printf("%d",soma1);

        return 0;
}
