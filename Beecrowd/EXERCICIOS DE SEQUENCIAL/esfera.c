#include <stdio.h>
int main(){
    double r, pi;
    pi = 3.14159;
    scanf("%lf" , &r);
    printf("VOLUME = %0.3lf\n", (4.0/3)*pi* r *r*r);
}