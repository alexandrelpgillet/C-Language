#include <stdio.h>
int main(){
    double A , B, C;
    scanf("%lf%lf%lf" , &A , &B , &C);
    printf("TRIANGULO: %0.3lf\n" , A*C/2);
    printf("CIRCULO: %0.3lf\n" , C*C*3.14159);
    printf("TRAPEZIO: %0.3lf\n" , (A+B)*C/2);
    printf("QUADRADO: %0.3lf\n" , B*B);
    printf("RETANGULO: %0.3lf\n" , A*B);

}