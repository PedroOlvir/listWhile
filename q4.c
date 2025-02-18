#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
    int numero_correto,numdigitado;
     srand(time(NULL));
    numero_correto = (rand() % 100) + 1;
    printf("\n------ Adivinhe o numero entre 1 a 100 ------\n             DIGITE UM NUMERO\n");

    while (1){
    scanf("%d",&numdigitado);
    if(numdigitado==numero_correto){
        printf("Voce acertou!!");
        break;
    }else if(numdigitado < numero_correto){
        printf("\nDigite um numero MAIOR. Tente novamente\n");
    }else{
        printf("\nDigite um numero MENOR. Tente novamente\n");
    }
    }
    
    }