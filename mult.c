#include <stdio.h>

void soma(int i , int j , int k , int c){
    if ( c < i ){
        k = k + j;
        soma(i,j,k,c+1);
    }
    else{
        printf("%d",k);
    }





}







int main (){

    soma(10, 80, 0, 0);





    return 0;
}