#include <stdio.h>

int multiplicar(numero,multiplicador){
    if(multiplicador==1){
        return numero;
    }
    return numero += multiplicar(numero,multiplicador-1);
}

void main(){
    int numero1,numero2;
    printf("\nDigite o primeiro número:");
    scanf("%i",&numero1);
    printf("\nDigite o segundo número:");
    scanf("%i",&numero2);
    int produto = multiplicar(numero1,numero2);
    printf("\n%i x %i = %i",numero1,numero2,produto);
}
