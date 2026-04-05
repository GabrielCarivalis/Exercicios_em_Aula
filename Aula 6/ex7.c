#include <stdio.h>

int main()
{
    float soma1=0,soma2=0;

    for(int i=2;i<=1000000;i+=2)
    {
        soma1+=-1/(float)i;
    }

    for(int i=1;i<=1000000;i+=2)
    {
        soma1+=1/(float)i;
    }

    printf("%.20f\n",soma1+soma2);

    soma1=0,soma2=0;
    for(int i=1000000;i>=2;i-=2)
    {
        soma1+=-1/(float)i;
    }

       for(int i=999999; i>=1; i-=2)
    {
        soma2+=1/(float)i;
    }

    printf("%.20f\n",soma1+soma2);

    return 0;

}