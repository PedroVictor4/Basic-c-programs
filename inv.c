#include <stdio.h>

void inv(int n){
    if(n>0){
    printf("%d",n%10);
    inv(n/10);
    }





}







int main(){

    inv(123456789);



    return 0;
}