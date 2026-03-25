#include <stdio.h>

int main()
{

    float preco_alcool_km;
    float preco_gasolina_km;
    float km_litro_alcool;
    float km_litro_gasolina;

    scanf("%f",&preco_alcool_km);

    scanf("%f",&km_litro_alcool);

    scanf("%f",&preco_gasolina_km);

    scanf("%f",&km_litro_gasolina);

    preco_alcool_km=preco_alcool_km/km_litro_alcool;
    preco_gasolina_km=preco_gasolina_km/km_litro_gasolina;

    if(km_litro_alcool>=km_litro_gasolina)
    {
    printf("gasolina");
    }
    else
    {
        printf("alcool");
    }
    }
