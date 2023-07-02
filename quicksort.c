#include <stdio.h>

int particao(int v[5],int e,int d){
    int i , j ;
    i = e;
    j = d;
    int pivo;
    pivo = v[(e+d)/2];
    while(i<j){
        while(v[i] < pivo){
            i++;
        }
        while(v[j]>pivo){
            j--;
        }
        if (i < j ){
            int aux;
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
        else{
            i = j +1;
            printf("nada");
        }
    }
    return j;
}
void quicksort(int v[5] , int e , int d){

    if(e < d ){
        int pivo;
        pivo = particao(v,e,d);
        quicksort(v,e,pivo);
        quicksort(v,pivo+1,d);
    }
}












int main(){


    int v[5] = {-1,4,3,2,1};
    quicksort(v, 0 ,4);
    for(int i = 0 ; i < 5 ; i++){
        printf("%d\n",v[i]);
    }





    return 0;
}