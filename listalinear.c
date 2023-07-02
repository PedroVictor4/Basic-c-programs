#include <stdio.h>
#include <stdlib.h>

typedef struct node *lista;//nn é a lista é só um ponteiro
struct node{
    char c;
    lista prox;
};

int main(){
    lista p = malloc(sizeof(struct node));
    lista q ;
    lista cab ;
    /*p->prox = p1;
    p->c ='A';
    p1->c = 'A';
    char a = p->c + p1->c;
    printf("%d\n",a);
    */
    for(int i = 0 ; i < 4 ; i ++ ){
        p->c = i;
        if(i == 0){
            cab  = p;
        }
        else{
            q -> prox = p;
            q = p;
        }
        p -> prox = NULL;
    }

   for(int i = 0 ; i < 3 ; i ++ ){
        if(i == 0){
        p = cab->prox;
    }
    printf("%c",p->c);
    p = p ->prox;
   }




}