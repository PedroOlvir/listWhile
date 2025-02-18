#include <stdio.h>

int main(){

    int num,p,primo;
    printf("Informe um numero ");
    scanf("%d",&num);
    if(num<2){
        printf("Nao exite nenhum primo antes que 2");
    }
    for (int i = 2; i <=num; i++){
        primo=1;
        p = 2;
        while (p*p<=i){
          if (i%p==0){
           primo = 0;
           break;
          }
          p++;
    }
    if(primo){
        printf("%d\n", i);
    }
    }
}