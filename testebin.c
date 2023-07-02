#include <stdio.h>
#include <math.h>




int pot(int exp){
    int pow = 0 , k = 0;
    printf("%d\n",exp);
    while(k <= 5 ){
        printf("aaaaaa\n");
        printf("%d\n",k);
        if(k = 0){
            pow = 1;
            k++;
        }
        pow = pow*pow;
        k++;
    }
    return pow;
}

int main(){
    char i[8] = "00000111";
    int j = 7 , soma = 0 , exp = 0;
    while(j >=0){
        printf("%c\n",i[j]);
        if(i[j] == '0'){
            j--;
            exp++;
        }
        if(i[j] == '1'){
            soma = soma + pow(2,exp);
            exp++;
            j--;
            //printf("Entrei\n");
        }
    }





    printf("%d\n",soma);








    return 0;
}