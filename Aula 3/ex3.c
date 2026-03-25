#include <stdio.h>

int main()
{

    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>=b)
    {
        if(a>=c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }

    if(b>=a)
    {
        if(b>=c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }



}
