#include <stdio.h>

void main(){
    int numero;
    printf("Digite um número para saber seu correspondente em fibonacci:");
    scanf("%i",&numero);
    int ultimo = 0;
    int fibonacci = 1;
    for( int n = 0 ; n < numero - 1; n++ ){
        fibonacci = ultimo + fibonacci;
        ultimo = fibonacci - ultimo;
    }
    printf("O fibonacci de %i é %i",numero,fibonacci);
}
