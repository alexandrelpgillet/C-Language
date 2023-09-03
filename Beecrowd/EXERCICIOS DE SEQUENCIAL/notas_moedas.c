#include <stdio.h>
int main(){

    int valor , moedas_total,  nota100 , nota50 , nota20 , nota10 , nota5 , nota2 , moeda1 , moeda50 , moeda25 , moeda10 , moeda5 , moeda01;

    double total , moedas;

    scanf("%lf" , &total);

    valor = total;
    moedas = total*100 - valor*100;
    moedas_total = moedas;

    nota100 = valor/100;
    nota50 = valor%100/50;
    nota20 = valor%100%50/20;
    nota10 = valor%100%50%20/10;
    nota5 = valor%100%50%20%10/5; 
    nota2 = valor%100%50%20%10%5/2;
    moeda1 = valor%100%50%20%10%5%2;

    moeda50 = moedas_total/50;
    moeda25 = moedas_total%50/25;
    moeda10 = moedas_total%50%25/10;
    moeda5 = moedas_total%50%25%10/5;
    moeda01 = moedas_total%50%25%10%5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n" , nota100);
    printf("%d nota(s) de R$ 50.00\n" , nota50);
    printf("%d nota(s) de R$ 20.00\n" , nota20);
    printf("%d nota(s) de R$ 10.00\n" , nota10);
    printf("%d nota(s) de R$ 5.00\n" , nota5);
    printf("%d nota(s) de R$ 2.00\n" , nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n" , moeda1);
    printf("%d moeda(s) de R$ 0.50\n" , moeda50);
    printf("%d moeda(s) de R$ 0.25\n" , moeda25);
    printf("%d moeda(s) de R$ 0.10\n" , moeda10);
    printf("%d moeda(s) de R$ 0.05\n" , moeda5);
    printf("%d moeda(s) de R$ 0.01\n" , moeda01);





    
}