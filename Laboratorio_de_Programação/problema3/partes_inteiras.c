#include <stdio.h>
int main(){

    int repeticao , num , resposta ;
    
    
    repeticao=0;

    for(repeticao ; ; repeticao++){
        
        printf("Digite um numero inteiro :\n");
        scanf("%d" , &num);

        printf("------------------------------------------------\n");

        printf("Centena: %d\n" , num/100);
        printf("Dezena: %d\n" , (num%100)/10);
        printf("Unidade: %d\n" ,(num%100)%10 );

        printf("------------------------------------------------\n");

        printf("Caso queira encerrar o programa digite 1\n");
        printf("Caso queira inserir outro valor digite qualquer valor , exceto o 1\n");
        
        printf("------------------------------------------------\n");
        printf("RESPOSTA:\n" );
        scanf("%d" , &resposta);
        

        if(resposta != 1){
            continue;
        }else{
            if( resposta == 1){
                break;
            }
        }
        
        


        

       
        
        
        


    }

    


}
