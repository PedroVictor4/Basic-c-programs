#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
// tamanho da fila com a mesma quantidade de nós 
/*struct no {
    int c;
    struct no *esq;
    struct no *dir;
};
*/


void percnivel(struct no *raiz){
    struct no *fila[13];
    int inicio = 0, fim = 0;

    fila[fim] = raiz;
    fim++;

    while (inicio < fim) {
        struct no *atual = fila[inicio];
        inicio++;

        printf("%d ", atual->c);

        if (atual->esq != NULL) {
            fila[fim] = atual->esq;
            fim++;
        }

        if (atual->dir != NULL) {
            fila[fim] = atual->dir;
            fim++;
        }
    }

}



int main (){
    struct no *raiz;
    raiz = malloc(sizeof(struct no));
    raiz -> c = 10;
    raiz -> esq = NULL;
    raiz -> dir = NULL;
    /*
    raiz -> esq = malloc(sizeof(struct no));
    raiz -> esq -> c = 9;
    raiz -> esq -> esq = NULL;
    raiz -> esq -> dir = NULL;
    raiz -> dir = malloc(sizeof(struct no));
    raiz -> dir -> c = 11;
    raiz -> dir -> esq = NULL;
    raiz -> dir -> dir = NULL;
    */
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
    percnivel(raiz);








    return 0;
}