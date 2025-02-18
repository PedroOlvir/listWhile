#include <stdio.h>


int main(){

    int num, i=1;
    float sere=0;

    printf("Digite um num \n");
    scanf("%d",&num);
      while(i<=num){
        sere += 1.0/i;
        i++;
    }
    
    printf("\nA serie Harmonica de %d e igual a %.2f\n", num, sere);
    
    

}