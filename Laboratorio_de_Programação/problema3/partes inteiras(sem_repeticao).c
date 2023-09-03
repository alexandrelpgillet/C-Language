#include <stdio.h>
int main(){
    int A;
    scanf("%d" , &A);

    printf("Centena : %d\n" , (A/100));
    printf("Dezena : %d\n" , (A%100)/10);
    printf("Unidade %d\n" ,(A%100)%10);



}