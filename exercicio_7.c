#include <stdio.h>
#include <stdbool.h>

bool isPerfeito(int numero){
    int somaDivisores = 0;
    for( int divisor = numero - 1 ; divisor > 0 ; divisor-- ){
        if( numero % divisor == 0 ){
            somaDivisores += divisor;
        }
    }
    return (somaDivisores == numero);
}

void main(){
    int numero;
    printf("Digite um número para verificar se ele é um número perfeito: ");
    scanf("%i",&numero);
    if(isPerfeito(numero)){
        printf("O número %i é um número perfeito\n",numero);
    }
    else{
        printf("O número %i não é um número perfeito\n",numero);
    }
}
