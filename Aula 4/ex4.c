#include <stdio.h>

int main()
{   
    int saldo;
    scanf("%d",&saldo);

    int cem=saldo/100;
    int cinquenta=(saldo%100)/50;
    int vinte=(saldo%100%50)/20;
    int dez=(saldo%100%50%20)/10;
    int cinco=(saldo%100%50%20%10)/5;
    int dois=(saldo%100%50%20%10%5)/2;
    int um=(saldo%100%50%20%10%5%2)/1;

    printf("%d cem, %d cinquenta, %d vinte, %d dez, %d cinco, %d dois e %d um",cem,cinquenta,vinte,dez,cinco,dois,um);

    return 0;

}