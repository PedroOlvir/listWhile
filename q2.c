#include <stdio.h>

int main(){
    int senha=2005,senhaUs;
    while (1){
       
        printf("Escreva a senha do usuario ");
        scanf("%d", &senhaUs);
         if(senhaUs==2005){
            break;
        } 
    }
    printf("Acesso permitido");
}