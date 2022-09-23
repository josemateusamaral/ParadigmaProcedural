#include <stdio.h>

void main(){
    int numero;
    printf("Digite uma número para obter seu fatorial:");
    scanf("%i",&numero);
    int fatorial = 1;
    for( int n = numero ; n > 1; n-- ){
        fatorial = fatorial * n;
    }
    printf("O fatorial de %i é %i\n",numero,fatorial);
}
