#include <stdio.h>
#include <math.h>
int main (){
    float nota , nota2 , media_geometrica , total;
    int repeticao;
    repeticao=0;
    total =1;
    
    for(repeticao ; repeticao<5 ; repeticao++, printf("Digite a nota numero %d :\n" , repeticao) , scanf("%f" , &nota) , total*=nota){}
    
    
    
    media_geometrica = pow(total , 1.0 / repeticao);
    
    
     
    
    
   
    printf("%f" , media_geometrica);
    
    
    
}