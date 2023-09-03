#include <stdio.h>
int main(){
    float horas, velocidade;
    scanf("%f%f" , &horas , &velocidade);
    
    printf("%0.3f\n" , horas*velocidade/12);

}