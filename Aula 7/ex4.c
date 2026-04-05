#include <stdio.h>

int main()
{
    int num,dig,presente=0;
    scanf("%d",&num);
    scanf("%d",&dig);

    if(num==0 && dig==0)
    {
        printf("presente");
    }

    while(num>0)
    {
        if(num%10==dig)
        {
            presente=1;
        }
        
        num=num/10;
    }

    if(presente==1)
    {
        printf("presente");
    }

    else
    {
        printf("nao presente");
    }

    return 0;
}