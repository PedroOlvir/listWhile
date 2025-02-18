#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);


    printf("%d", n);


    while (n != 1) {
        if (n % 2 == 1) { 
            n = (n * 3) + 1;
        } else {
            n = n / 2; 
        }

        printf(" -- %d", n);
    }

    return 0;
}