#include <stdio.h>
void somamatriz(int vet[][2]  , int vet2[][2] ,int i ,int j ,int vet3[][2]){
    if(i > 1 ){
        return;
    }
    else if( j > 1){
        i++;
        j = 0;
    }
    else if(i == 2 && j == 0){
        return;
    }
    vet3[i][j] = vet[i][j] + vet2[i][j];
    printf("%d i = %d j = %d ", vet3[i][j] , i , j );
    somamatriz(vet, vet2, i, ++j ,vet3);

}

int main(){
    int  i = 0 , j = 0 , vet3[2][2];
    int vet[2][2] = {{1, 2}, {4, 5}};
    int vet2[2][2] = {{9, 8}, {6, 5}};
    somamatriz(vet, vet2,i ,j ,vet3);
    return 0;
    
}