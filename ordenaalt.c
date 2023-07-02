#include <stdio.h>


int main(){
    int n = 0 ;
    printf("Digite o tamanho do vetor \n");
    scanf("%d",&n);
    int vet[n] , aux = 0;
    for(int i = 0;i < n ; i++){
        printf("Digite um valor : ");
        scanf("%d",&vet[i]);
    }
    for(int i = 0 ; i < sizeof(vet)/4 -1 ; i++){
        if (vet[i] < vet[i + 1]){
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
            
            i = -1;
        }
    }
    for(int i = 0;i < n ; i++){
        printf("%d",vet[i]);
    }


    return 0;
}