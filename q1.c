#include <stdio.h>
int main(){
int n,soma=0;
while (n!=0){
    printf("Informe um valor ");
    scanf("%d",&n);
    soma +=n;
}
printf("A soma e = %d",soma);
}