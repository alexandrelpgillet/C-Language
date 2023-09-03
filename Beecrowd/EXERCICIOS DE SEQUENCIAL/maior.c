#include <stdio.h>
#include <math.h>
int main(){
    int A , B , C , maior , maior2; 
    
    scanf("%d%d%d" , &A , &B ,&C);
    
    maior = (A + B + abs(A-B))/2;
    maior2 = (maior + C + abs(maior-C))/2;

    printf("%d eh o maior\n" , maior2);



    
    

}