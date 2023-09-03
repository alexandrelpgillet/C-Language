#include <stdio.h>
int main(){
    int distancia;
    float litros;

    scanf("%d%f" , &distancia , &litros);
    printf("%0.3f km/l\n" , distancia/litros);
}