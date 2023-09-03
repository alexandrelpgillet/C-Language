#include <stdio.h>
int main(){
    char nome;
    double salario , bonus;
    
    scanf("%s%lf%lf" , &nome , &salario , &bonus);
    printf("TOTAL = R$ %0.2lf\n" , bonus*0.15 + salario);
}