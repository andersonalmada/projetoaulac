/*
Faça uma função que receba uma matriz 4 x 4 e retorne quantos valores maiores do que 10 ela possui.
*/
#include <stdio.h>
#include "library.h"

int main() {
    int matriz[2][2];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("\nDigite matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Count: %d", countMore10InMatriz(matriz));
    printf("Hello World");


    return 0;
}
