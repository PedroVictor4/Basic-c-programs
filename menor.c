#include <stdio.h>

void menor(int vet[7] , int i , int m){
    if (vet[i] < m){
        m = vet[i];
    }
    if ( i < 7){
    menor(vet,i + 1,m);
    }
    else{
    printf("%d\n",m);
    }

}




int main(){
    int vet[7] = {-1,1,2,-10,-15,5,-14} , i = 0 , m = 0;
    menor(vet, i, m = 0);





}