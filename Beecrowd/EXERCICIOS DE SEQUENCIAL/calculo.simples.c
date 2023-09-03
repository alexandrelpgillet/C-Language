#include <stdio.h>
int main(){
    int cod1 , cod2 , quant1 , quant2; 
    float prod1 , prod2;

    scanf("%d%d%f%d%d%f" , &cod1 , &quant1 , &prod1 , &cod2 , &quant2 , &prod2);
    printf("VALOR A PAGAR: R$ %0.2f\n" , quant1*prod1 + quant2*prod2);
}