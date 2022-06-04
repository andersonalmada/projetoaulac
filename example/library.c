#include "library.h"
#include <math.h>

int checkNumber(double n) {
    int base = sqrt(n);

    if((base * base) == n) {
        return 1;
    }

    return 0;
}

int convertToSeconds(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

double result(double n1, double n2, double n3, char ch) {
    double media = 0;

    if(ch == 'A') {
        media = (n1 + n2 + n3) / 3;
    } else if(ch == 'P') {
        media = (5 * n1 + 3 * n2 + 2 * n3) / 10;
    }

    return media;
}

int countMore10InMatriz(int matrix[2][2]) {
    int count = 0;
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(matrix[i][j] > 10) {
                count++;
            }
        }
    }

    return count;
}

