#include <stdio.h>
#include <stdlib.h>

struct no{
    int c;
    struct no *esq;
    struct no *dir;
};

void adiciona(struct no *raiz , int c );
void remover(struct no *raiz , int c );
void printar(struct no *raiz );
