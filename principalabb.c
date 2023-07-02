#include "funcoes.h"

int main(){

    struct no *raiz;
    raiz = malloc(sizeof(struct no));
    raiz -> c = 100;
    raiz -> esq = NULL;
    raiz -> dir = NULL;
    adiciona(raiz , 101);
    adiciona(raiz , 25);
    adiciona(raiz , 40);
    adiciona(raiz , 65);
    adiciona(raiz , 30);
    adiciona(raiz , 9);
    adiciona(raiz , 8);
    adiciona(raiz , 97);
    adiciona(raiz , 203);
    adiciona(raiz , 197);
    adiciona(raiz , 500);
    printar(raiz);
    printf("\n------------------\n");
    //remover(raiz , 300);
    //remover(raiz ,9);
    printar(raiz);
    return 0;
}