#include <stdio.h>
#include <stdlib.h>

struct cab{
    int n;
    struct no *ini;
};
struct no{
    int a;
    struct no *prox;
    struct no *rep;
};
struct no *make_set(int n) { 
    struct no *cab = malloc(sizeof(struct no));
    cab->prox = NULL;
    cab ->a = n;
    cab ->rep = cab;
    return cab;  // Retorna o ponteiro para o primeiro nó da lista
}
struct no *find_set(struct no *cab,int elemento){
    struct no *aux;
    aux = cab ;
    while(aux != NULL){
        if(aux ->a == elemento){
            return aux;
        }
        aux = aux -> prox;
    }
}
void uniao(struct no *cab1, struct no *cab2) {
    struct no *aux = cab1;
    int contador;
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

int main() {
    //struct no *cabs[10];
    struct cab *cabs[10];
    struct no *aux;
    for(int i = 0 ; i <10 ; i++){
        cabs[i] = malloc(sizeof(struct cab));
        cabs[i] ->ini = make_set(i);
        //cabs[i] = malloc(sizeof(struct cab));
        //cabs[i] -> ini == make_set(i);

    }
    /*while (aux != NULL) {
        printf("%d ", aux->a);
        aux = aux->prox;
    }
    */
    uniao(find_set(cabs[4] ->ini,4),find_set(cabs[3] ->ini,3));
    aux = find_set(cabs[0]->ini,0);
    printf("O número é : %d",aux ->a );
    printf("O número é : %d",cabs[4]->ini ->prox ->a);
    printf("O número é : %p",find_set(cabs[4] ->ini , 3));
    return 0;
}








