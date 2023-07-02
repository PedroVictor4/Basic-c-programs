/*int rev (int n ,int o,int i,int r){

    if(o == 0){
        return r;
    }
    int aux = 0, k = 2.4;
    aux = n/10^o;
    printf("O valor de aux é%d\n o n é %d    %d \n",aux,n,k);
    r+=aux*10^i;
    printf("O r é : %d \n",r);
    return rev(n-aux*10^o, o-1, i+1, r);
    

}
*/
/*#include <stdio.h>
#include <math.h>
int inv (int n,int o,int i){
    if (o == 0){
        return n;
        printf("Aq %d\n",n);
    }
    int k = pow(10,o);
    int aux = n/k;
    int ninv = n/10^o*i + inv(n - aux*k,o-1,i + 1);
    printf("O valor é %d : %d %d %d \n", k ,aux , n - aux*k,ninv);
    
    return ninv;
}



int main(){
    //int j = rev(453,2,0,0);
    int k = inv(345,2,0);
    printf("%d",k);


    return 0 ;
}
*/













/*int main(){
    //int j = rev(453,2,0,0);
    int k = inv(345,2,0);
    printf("%d",k);






    return 0 ;
}
*/



#include <stdio.h>

int invert(int n){
    
    if(n == 0){
        return 0;
    }
    else {
        printf("%d",n%10);
        return invert(n/10);
    }
    
}




int main(){

    int j = invert(315);
    return 0;
}


/*

#include <stdio.h>

int inverter(int n);

int main() {
    int num, inverso;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    inverso = inverter(num);
    printf("O inverso de %d e %d\n", num, inverso);
    return 0;
}

int inverter(int n) {
    static int inverso = 0;
    if (n == 0) {
        return inverso;
    } else {
        inverso = inverso * 10 + n % 10;
        return inverter(n / 10);
    }
}



*/