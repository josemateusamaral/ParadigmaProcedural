#include <stdio.h>
#include <stdbool.h>

bool areAmigos(int n1, int n2){
    int soma = 0;
    for( int divisor = n1 - 1 ; divisor > 0 ; divisor-- ){
        if( n1 % divisor == 0 ){
            soma += divisor;
        }
    }
    return (soma==n2);
}

void main(){
    int numero1,numero2;
    printf("\nDigite o primeiro número:");
    scanf("%i",&numero1);
    printf("\nDigite o segundo número:");
    scanf("%i",&numero2);
    if( areAmigos(numero1,numero2) && areAmigos(numero2,numero1) ){
        printf("Os números %i e %i são números amigos",numero1,numero2);
    }
    else{
        printf("Os números %i e %i não são números amigos",numero1,numero2);
    }
}
