#include <stdio.h>

int main(){
    int senha=2005,senhaUs;
    while (1){
       
        printf("\nEscreva a senha do usuario \n");
        scanf("%d", &senhaUs);
         if(senhaUs==senha){
            break;
        }else{
            printf("\nERRO. TENTE NOVAMENTE");
        }
    }
    printf("Acesso permitido");
}
