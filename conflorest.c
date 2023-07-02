#include <stdio.h>

struct no{
    int a;
    struct no *pai;
};
struct no *make_set(int n) { 
    struct no *cab = malloc(sizeof(struct no));
    cab -> a = n;
    return cab;  // Retorna o ponteiro para o primeiro nó da lista
}

void uniao(struct no *cab1, struct no *cab2) {
    struct no *aux = cab1;
    
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    
    aux->prox = cab2;  // Atualiza o ponteiro do último nó do primeiro conjunto para o primeiro nó do segundo conjunto
    //cab2->prox = NULL;  // Define o primeiro nó do segundo conjunto como o final da lista encadeada
    
    // Atualiza o ponteiro de representação de todos os nós do segundo conjunto
    aux = cab2;
    while (aux != NULL) {
        aux->rep = cab1;
        aux = aux->prox;
    }
}

int main(){

    struct no *vet[4];

    for (int i = 0 ; i < 4 ; i ++){

        vet[i] = make_set(i);

    }
    

    return 0;
}