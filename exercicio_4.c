#include <stdio.h>

int calcular_fibonacci(int fibonacci) {
    if ( fibonacci > 1 ){
        return calcular_fibonacci(fibonacci - 1) + calcular_fibonacci( fibonacci - 2 );
    }
    return fibonacci;
}

void main(){
    int numero;
    printf("Digite uma número para obter seu correspondente em fibonacci:");
    scanf("%i",&numero);
    int fibonacci = calcular_fibonacci(numero);
    printf("O fatorial de %i é %i\n",numero,fibonacci);
}
