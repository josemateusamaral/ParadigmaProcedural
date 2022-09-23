#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool pertence(int numero, int lista[]){
    for(int i = 0;i < 100;i++){
        if(lista[i]==numero){
            return true;
        }
    }
    return false;
}

void main(){
    
    //lista de numeros
    int numeros[100];
    char numero[64];
    
    //adicionar numeros a lista
    int qntdAdicionada = 0;
    while(qntdAdicionada<=100){
        
        printf("Adicionar número a lista [s para parar]:");
        scanf("%s",numero);
        if(numero[0]=='s'){
            break;
        }
        else{
            numeros[qntdAdicionada] = atoi(numero);
            qntdAdicionada++;
        }
    }
    
    //verificar se um numero esta na lista
    while(true){
        printf("\n\n---Números adicionados a lista---\n");
        for(int i = 0 ; i < qntdAdicionada ; i++ ){
            printf("%i ",numeros[i]);
        }
        printf("\n\n");
        printf("Digite um número para ver se ele esta na lista [s para sair]:");
        scanf("%s",numero);
        if(numero[0]=='s'){
            break;
        }
        else{
            if(pertence(atoi(numero),numeros)){
                printf("O número %i está na lista",atoi(numero));
            }
            else{
                printf("O número %i não está na lista",atoi(numero));
            }
        }
        printf("\n[c] continuar\t[s] sair:");
        scanf("%s",numero);
        if(numero[0]=='c'){
            continue;
        }
        else{
            break;
        }
    }
}
