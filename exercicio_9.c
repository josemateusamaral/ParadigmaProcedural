#include <stdio.h>

int contarDigitos(int numero){
    int qntdDigitos = 1;
    if(numero > 10){
        qntdDigitos += contarDigitos(numero/10);
    }
    return qntdDigitos;
}

void main(){
    int numero;
    printf("\nDigite um número para saber quantos digitos ele tem:");
    scanf("%i",&numero);
    int quantidadeDeDigitos = contarDigitos(numero);
    printf("\nO número %i tem %i dígitos",numero,quantidadeDeDigitos);
}
