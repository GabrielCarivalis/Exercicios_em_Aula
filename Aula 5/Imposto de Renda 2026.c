#include <stdio.h>

int main()
{
    double renda;
    scanf("%lf",&renda);

    double imposto_4=(renda-4664.68)*0.275;
    double imposto_3=(4664.68-3751.05)*0.225;
    double imposto_2=(3751.05-2826.65)*0.15;
    double imposto_1=(2826.65-2428.80)*0.075;
    
    if(renda>4664.68)
    {
        renda=imposto_4+imposto_3+imposto_2+imposto_1;
    }

    else if(renda>=3751.06)
    {
        renda=(renda-3751.05)*0.225+imposto_2+imposto_1;
    }

    else if(renda>=2826.66)
    {
        renda=(renda-2826.65)*0.15+imposto_1;
    }

    else if(renda>=2428.81)
    {
        renda=(renda-2428.81)*0.075;
    }

    else
    {
        renda=0;
    }

    printf("%.2lf",renda);

    return 0;

}
