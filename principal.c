#include <stdlib.h>
#include <stdio.h>

#include "operacoes.h"

int main() {
    int x = 10;
    int y = 5;

    printf("Soma = %d\n", soma(x, y));
    printf("Subtração = %d\n", subtrai(x, y));
    printf("Multiplicação = %d\n", multiplica(x, y));
    printf("Divisão = %d\n", divide(x, y));
    return 0;
}