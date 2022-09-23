#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool pertence(int numero, int lista[]){
    for(int i = 0;i < 25;i++){
        if(lista[i]==numero){
            return true;
        }
    }
    return false;
}

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
    int numeros[25];
    int numero;
    int quantidadeDePrimos = 0;
    int quantidadeDeSorteios = 0;
    while(quantidadeDePrimos<25){
        numero = rand() % 99 + 2;
        if( isPrimo(numero) && !pertence(numero,numeros) ){
            numeros[quantidadeDePrimos] = numero;
            quantidadeDePrimos++;
        }
        quantidadeDeSorteios++;
    }
    printf("\nforam sorteados %i números\n",quantidadeDeSorteios);
    printf("\nnúmeros primos entre 1 e 100\n");
    for( int i = 0 ; i < 25 ; i++ ){
        printf("%i ",numeros[i]);
    }
}
