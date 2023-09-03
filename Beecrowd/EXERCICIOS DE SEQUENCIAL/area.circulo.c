#include <stdio.h>

int main(){
    double Area , raio , pi;
    pi = 3.14159;

    scanf("%lf" , &raio);
    Area = pi * raio * raio;

    printf("A=%0.4lf\n" , Area);
}
