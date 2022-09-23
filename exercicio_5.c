#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool isPrimo(int numero){
    for( int divisor = numero - 1 ; divisor > 1 ; divisor-- ){
        if( numero % divisor == 0 ){
            return false;
        }
    }
    return true;
}

void main(){
    srand(time(0));
    int numero;
    int quantidadeDePrimos = 0;
    int quantidadeDeSorteios = 0;
    while(quantidadeDePrimos<25){
        numero = rand() % 99 + 2;
        if(isPrimo(numero)){
            printf("%i ",numero);
            quantidadeDePrimos++;
        }
        quantidadeDeSorteios++;
    }
    printf("\nforam sorteados %i números\n",quantidadeDeSorteios);
}
