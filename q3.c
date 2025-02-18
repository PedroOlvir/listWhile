#include <stdio.h>

int main(){
     
    float nota,soma=0,media;
    int cont=0;
    printf("Digite uma nota entre 1 a 10. Digite umm numero menor que 0 para encerrar \n");
    while (1){
      scanf("%f",&nota);
    
      if(nota< 0 || nota>10){
        break;
      } else{
        soma+=nota;
        cont++;
      }
    }
    if (cont>0){
        media = soma/cont;
        printf("A media e %.2f",media);
    }    
}