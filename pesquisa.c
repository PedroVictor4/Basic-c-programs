#include <stdio.h>


int main(){

    int vet[8] = {1,2,3,4,5,6,7,8} , inf = 0 , sup = 7 , n = 8 , j = 6;

    while (inf < sup){
        int meio = (inf+sup)/2;
        printf("%d \n",meio);
        if(vet[meio] > j){
            //printf("%d",meio);
            sup = meio -1;
        }
        else if(vet[meio] <j){
            inf = meio + 1;
        }
        else{
            printf("%d",meio);
            break;
        }
    }

    return 0;
}