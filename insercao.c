#include <stdio.h>

void insercao(int n,int v[10]){
    for (int i = 1  ; i < n ; i++){
        int j = i;
        int t = v[i];
        while (j>0 && v[j-1] > t){
            v[j] = v[j-1];
            j = j-1;
        }
        v[j] = t;
    }
}

int main(){
    int n = 10;
    int vet[10] ={11,10,4,3,1,5,-1,7,8,9};
    insercao(10,vet);
    for (int i = 0 ; i < 10 ; i++){
        printf("%d\n",vet[i]);
    }








    return 0;
}