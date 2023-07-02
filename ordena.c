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
    for(int i = 0 ; i < sizeof(vet)/4 ; i++){
        for(int j = 0 ; j < sizeof(vet)/4;j++){
            if (vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }

    }
    for(int i = 0;i < n ; i++){
        printf("%d",vet[i]);
    }
    return 0;
}