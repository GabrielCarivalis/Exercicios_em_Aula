#include <stdio.h>


int main()
{

    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    if(a<b && a<c)
    {
        if(b<c)
        {
            printf("%f, %f, %f",a,b,c);
        }
        else
        {
             printf("%f, %f, %f",a,c,b);
        }
    }
    else if(b<a && b<c)
    {
        if(a<c)
            printf("%f, %f, %f",b,a,c);
        else
            printf("%f, %f, %f",b,c,a);
    }
    else
    {
        if(a<b)
            printf("%f, %f, %f",c,a,b);
        else
            printf("%f, %f, %f",c,b,a);
    }

    return 0;
}
