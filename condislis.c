#include <stdio.h>
#include <stdlib.h>
typedef struct vertice {
    int n;
    struct vertice *prox;
    struct vertice * representante;
}vertice;
int main(){
    vertice *cab;
    cab = malloc((sizeof(vertice)));
    cab->prox = NULL;
    cab->representante = cab;
    vertice *aux;
    vertice *ret;
    ret = cab;

    for (int i = 0 ; i < 10 ; i++){
        aux = malloc((sizeof(vertice)));
        aux ->prox = NULL;
        aux -> n = i;
        aux -> representante = aux;
        ret ->prox = aux;
        ret = aux;


    }
    
    ret = cab -> prox;
    int i = 0 ;
    while(ret  != NULL){
        printf("%d\n",ret -> n);
        ret = ret -> prox;
        i ++;
    }



    return 0;
}
/*
        ret = cab;
        aux ->n = i;
        aux ->representante = aux;
        aux ->prox = ret -> prox;
        ret -> prox = aux ;
        ret = aux;
*/