#include <stdio.h>

int main()
{
    int n1,n2;

    for(int i=1000;i<=9999;i++)
    {
        n2=i%100;
        n1=i/100;
        n1=n1+n2;

        if(n1*n1==i)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
