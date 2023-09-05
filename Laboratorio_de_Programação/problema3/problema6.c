#include <stdio.h>
#include <math.h>
int main () {
    float A , B , C;
    scanf("%f%f%f" , &A , &B , &C );
    
    printf("%f\n" , A*B/C);
    printf("%f\n" , A*A + 2.3 *B - 5*C);
    printf("%f\n" , B*2*C - 3*B + (C/3.2)*5 -4);
    printf("%f\n" , pow(A*B*C , 1.0/3)/2.5);



    
}