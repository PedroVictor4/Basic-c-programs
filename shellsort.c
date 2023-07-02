#include <stdio.h>

void shellsort(int n, int v[4]){
    int j = 0 , pulo = 0 , aux = 0;
    pulo = n/2;
    while (pulo >0){
        for(int i = pulo ; i <n ; i++){
            aux = v[i];
            j = i;
            while(j >= pulo && v[j-pulo] >aux){
                v[j] = v[j - pulo];
                j = j - pulo;
            }
            v[j] = aux;
        }
        pulo = (pulo/2);
    }
}







int main(){
    int v[7] = {3,0,9,4,8,-1,7};
    shellsort(7,v);
    for(int i = 0 ; i <7 ; i++){
        printf("%d\n",v[i]);
    }




    return 0;
}