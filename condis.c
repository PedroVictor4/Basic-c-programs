#include <stdio.h>


int main(){
    int n = 7;
    int v[7] = {0,1,2,3,4,5,6};
    int a1 = 0 , a2 = 0;
    for(int i = 0 ; i < n ; i ++){
        v[i] = i;
    }
    while (1 < 3){
        printf("Digite o primeiro vértice da aresta : ");
        scanf("%d",&a1);
        if(a1 == 123){
            break;
        }
        printf("Digite o segundo vértice da aresta : ");
        scanf("%d",&a2);
        if(v[a1] != a1){
            if(a1 < v[a1]){
                v[a1] = a1;
            }
            else if(a2 < v[a1]){
                v[a1] = a2;
            }
        }
        if(v[a2] != a1){
            v[a2] = v[a1];
        }
    }




    printf("-----------------------------\n");
    for(int i = 0 ; i < n ; i ++){
        printf("%d\n",v[i]);
    }
    return 0;
}
    /*
    int n = 7;
    int v[7] = {0,1,2,3,4,5,6};
    int a1 = 3 , a2 = 0;
    for(int i = 0 ; i < n ; i ++){
        v[i] = i;
    }
    while (1 < 3){
        printf("Digite a aresta 1 : \n");
        scanf("%d",&a1);
        if(a1 == 123){
            break;
        }
        printf("\nDigite a aresta 2 : \n");
        scanf("%d",&a2);
        for(int i = 0 ; i < n ; i ++){
            if(i == a1 ){
                if(v[i] != a1 && a1 < v[i] ){
                    v[i] = a1;
                    continue;
                }
            }
            if(i == a2){
                if(v[i] != a2 && a2 < v[i] ){
                    v[i] = v[a1];
                    printf("%d\n---------------",v[i]);
                    continue;
                }
            }
        }
    }
    printf("-----------------------------\n");
    for(int i = 0 ; i < n ; i ++){
        printf("%d\n",v[i]);
    }
    */