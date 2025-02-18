#include <stdio.h>

int main(){

    float chic = 1.7, juca = 1.1;
    int temp = 0;
    while (juca<=chic){
        chic += 0.02;
        juca += 0.03;
        temp++;
    }
    printf("%d anos para Juca ser maior que Chico",temp);
    
}