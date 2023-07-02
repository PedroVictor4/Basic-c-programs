#include "funcoes.h"
void adiciona(struct no *raiz , int c ){
    struct no *d = raiz;
    while(0<10){
        if( d -> c > c){
            if(d -> esq == NULL){
                d -> esq = malloc (sizeof(struct no));
                d -> esq -> c = c;
                d -> esq -> esq = NULL;
                d -> esq -> dir = NULL;
                return;
            }
            d = d ->esq;
        }
        else if( d -> c < c){
            if(d -> dir == NULL){
                d -> dir = malloc (sizeof(struct no));
                d -> dir -> c = c;
                d -> dir -> dir = NULL;
                d -> dir -> esq = NULL;
                return;
            }
            d = d ->dir;
        }
        else {
            printf("Número encontrado ! \n");
            return;
        }
    }
}

void remover(struct no *raiz , int c ){
    struct no *d = raiz;
    struct no *aux = d;

    if(c > raiz ->c){
        while(d != NULL){
            if( d -> c > c){
                aux = d;
                d = d ->esq;
            }
            else if( d -> c < c){
                aux = d;
                d = d ->dir;
            }
            else if ( d ->c == c){
                aux -> dir = d -> dir;
                free(d);
                return ;
            }
        }
    }
    if(c < raiz ->c){
        while(d != NULL){
            if( d -> c > c){
                aux = d;
                d = d ->esq;
            }
            else if( d -> c < c){
                aux = d;
                d = d ->dir;
            }
            else if ( d ->c == c){
                aux -> esq = d -> esq;
                free(d);
                return ;
            }
        }
    }
    return;

}
void printar(struct no*raiz){
    struct no  *d = raiz;
    if(d == NULL) return;
    printar(d ->esq);
    printf("\n%d",d->c);
    printar(d ->dir);
    //printf("\n%d",d->c);
}
