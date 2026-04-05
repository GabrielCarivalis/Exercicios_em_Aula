#include <stdio.h>

int main()
{
    int n,valor0,valor1,foo=1;

    scanf("%d",&n);

    scanf("%d",&valor0);

    for(int i=1; i<n && foo!=0;i++)
    {
        scanf("%d",&valor1);

        if(valor1>valor0)
        {
            if(foo==2)
            {
                foo=0;
            }

            else
            {
                foo=1;
            }
            
        }

        else if(valor0>valor1)
        {
            if(foo==1)
            {
                foo=0;
            }

            else
            {
                foo=2;
            }
            
        }

        valor0=valor1;
    }

    if(foo==0)
    {
            printf("sem ordem");
    }

    else if(foo==1)
    {
        printf("crescente");
    }

    else if(foo==2)
    {
        printf("decrescente");
    }

    return 0;
}