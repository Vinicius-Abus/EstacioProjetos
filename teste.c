#include <stdio.h>

int main (){

    int numero;
    

    printf("Digite um numero: ");
    scanf("%d", & numero);

    if (numero == 0){
        printf("O número %d é Par.\n", numero);
    } else {
        printf("O numero %d é impar.\n", numero);
    }
   


    
    return 0;
}