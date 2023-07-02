/*#include <stdio.h>

int main() {
    printf("  /\\___/\\ \n");
    printf(" ( o   o )\n");
    printf(" (  =^=  )\n");
    printf(" (        )\n");
    printf(" (         ) ~\n");
    printf(" (           )\n");
    printf(" (            )\n");
    printf(" (             )\n");
    printf(" (              ))\n");
    printf(" (           ( )) )\n");
    printf(" (          ) )  )) ))\n");
    printf("           ( (  )  ) )\n");
    printf("          (    (   ( /\n");
    printf("        \\_(     (   \\\n");
    printf("            `|_/|\\___/\n");
    return 0;
}
*/
#include <stdio.h>

int inverte_algarismos(int numero){
    
    if(numero == 0){
        return 0;
    }
    else{
        printf("%d", numero % 10);
        return inverte_algarismos(numero / 10);
    }
}

int main(){
    
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("O numero invertido eh: ");
    inverte_algarismos(numero);
    
    return 0;
}