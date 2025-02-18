#include <stdio.h>

int main(){

    int n1, n2, a, b, resto;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;

    while (b != 0) { 
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O MDC entre %d e %d = %d.\n", n1, n2, a);

    return 0;

}