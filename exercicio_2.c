#include <stdio.h>

int calcular_fatorial(int fatorial) {
    if ( fatorial > 1 ){
        return fatorial * calcular_fatorial( fatorial - 1 );
    }
    return 1;
}

void main(){
    int numero;
    printf("Digite uma número para obter seu fatorial:");
    scanf("%i",&numero);
    int fatorial = calcular_fatorial(numero);
    printf("O fatorial de %i é %i\n",numero,fatorial);
}
