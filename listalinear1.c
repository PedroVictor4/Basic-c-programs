#include <stdio.h>
#include <stdlib.h>

struct no {
    int c;
    struct no *prox;
};

int main(){
    struct no *cab;
    struct no *p;
    struct no *ret;
    cab = malloc(sizeof(struct no));
    cab -> prox = NULL;
    
    for (int i = 0 ; i < 4 ; i ++){
        p  = malloc(sizeof(struct no));
        ret = cab;
        //printf("%p\n",ret -> prox);
        p -> c = i ;
        p -> prox = ret -> prox;
        ret -> prox = p;
        ret = p;
    }
    struct no *d = cab -> prox;
    //printf("%p\n",cab);
    printf("%p\n",cab -> prox);
    //ret = cab;
    int i = 0 ;
    while(d -> prox != NULL){
        printf("%d\n",d -> c);
        d = d -> prox;
        i ++;
    }
    p  = malloc(sizeof(struct no));
    ret = cab;
    p -> c = 10;
    p -> prox = ret ->prox;
    ret -> prox = p;
    ret =p;
    d = cab -> prox;
    while(d -> prox != NULL){
        printf("%d\n",d -> c);
        d = d -> prox;
        i ++;
    }

    free(cab);
    return 0;
}




/*
int main(){
    struct no *cab;
    struct no *p;
    struct no *q;
    cab = malloc (sizeof(struct no ));
    cab -> prox = NULL;
    for (int i = 0 ; i < 10 ; i ++){
        p = malloc (sizeof(struct no ));
        p -> c = i;
        if (i == 0){
            cab = p ;
        }
        else{
            q -> prox = p ;
        }
        q = p;
    }
    p -> prox = NULL;
    q = cab;
    int i = 0  ;
    while(q != NULL){
        printf("%d\n",q -> c);
        q = q -> prox;
        i ++;
    }
    free(cab);

    return 0;
}
*/