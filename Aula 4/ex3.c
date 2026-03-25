#include <stdio.h>

int main()
{
    int dist, ponto;

    scanf("%d",&dist);

    if(dist<=800)
    {
        ponto=1;
    }
    else if(dist>800 && dist<=1400)
    {
        ponto=2;
    }
    else
    {
        ponto=3;
    }

    printf("pontos:%d",ponto);

    return 0;
}
