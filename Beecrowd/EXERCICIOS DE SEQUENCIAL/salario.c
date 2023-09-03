#include <stdio.h>
int main(){
    int num , horas;
    float dinheiro;

    scanf("%d%d%f" , &num , &horas , &dinheiro);
    printf("NUMBER = %d\n SALARY = U$ %0.2f" , num , horas*dinheiro);
}
