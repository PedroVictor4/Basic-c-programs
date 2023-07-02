#include <stdio.h> 
//#include <stdlib.h>
void merge(int vet[6] , int e ,int m ,int d){
    int i , j , k ;
    //merge(v1,e,m,d);
    //int i, j, k;
    int n1 = m - e + 1;
    int n2 = d - m;
    int L[n1], R[n2];
    // Copia os elementos para os vetores temporários
    for (i = 0; i < n1; i++)
        L[i] = vet[e + i];
    for (j = 0; j < n2; j++)
        R[j] = vet[m + 1 + j];
    i = 0; // Índice do subvetor esquerdo
    j = 0; // Índice do subvetor direito
    k = e; // Índice do subvetor final

    while ((i < n1) && (j < n2) ){
        if (L[i] <= R[j]){
            vet[k] = L[i];
            i = i + 1;
        }
        else {
            vet[k] = R[j];
            j = j + 1;
        }
        k = k+1;
    }
    while(i < n1){
        vet[k] = L[i];
        i = i +1;
        k = k + 1;
    }
    while(j < n2){
        vet[k] = R[j];
        j = j + 1;
        k = k + 1;
    }

}

void sort(int e , int d,int vet[6]){
    if(d>e){
        int m = (d+e)/2;
        sort(e,m,vet);
        sort(m+1,d,vet);
        merge(vet,e,m,d);
    }
}

int main (){

    int vet[6] = {12, -1, 13, 0, 6, 4} , vet1[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    //int n = sizeof(vet) / sizeof(vet[0]);
    sort(0 , 5, vet);
    for (int i = 0 ; i < 6 ; i++){
        printf("%d\n",vet[i]);
    }
    return 0;
}