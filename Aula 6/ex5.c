#include <stdio.h>

int main()
{
    int h1,m1,s1;
    scanf("%d:%d:%d",&h1,&m1,&s1);

    int h2,m2,s2;
    scanf(" %d:%d:%d",&h2,&m2,&s2);
    
    int h,m,s;

    if(s1>59 || s2>59 || s1<0 || s2<0 || m1>59 || m2>59 || m1<0 || m2<0)
    {
        printf("entrada invalida");
    }

    else if(s1+s2>=59 && m1+m2>=59)
    {
        s=(s1+s2)%60; 
        m=(m1+m2 +1)%60;
        h=h1+h2 + 1;
    }

    else if(s1+s2>=59)
    {
        s=(s1+s2)%60;
        m=m1+m2+1;
        h=h1+h2;
    }

    else if(m1+m2>=59)
    {
        s=s1+s2;
        m=(m1+m2)%60;
        h=h1+h2+1;
    }

    else
    {
        s=s1+s2;
        m=m1+m2;
        h=h1+h2;
    }

    printf("%d:%d:%d",h,m,s);

    return 0;
}