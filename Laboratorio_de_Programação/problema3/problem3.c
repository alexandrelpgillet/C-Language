#include <stdio.h>
#include <math.h>
int main(){
    int A, B , A2 , B2;
    scanf("%d%d%d%d" , &A , &B , &A2 , &B2);
    printf("D = %0.2f\n" , sqrt(pow(A2-A ,2 )+pow(B2-B ,2)) );

    }
