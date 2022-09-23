#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

bool isNumero(char cpf[]){
    for( int i = 0 ; i < 11 ; i++ ){
        if(!isdigit(cpf[i])){
            return false;
        }
    }
    return true;
}

bool verificar_CPF(char cpf[]){
    int digitoVerificador1, digitoVerificador2,somaDigitos,multiplicador,digito;
    
    //verificar primeiro digito verificador
    somaDigitos = 0;
    for( multiplicador = 10 , digito = 0 ; multiplicador > 1 ; digito++ , multiplicador-- ){
        int digitoCpf = ( (int)cpf[digito] - 48 );
        somaDigitos += digitoCpf * multiplicador;
    }
    if( (11 - (somaDigitos % 11)) > 9 ){
        digitoVerificador1 = 0;
    }
    else{
        digitoVerificador1 = 11 - (somaDigitos % 11);
    }
    if( ( (int)cpf[9] - 48 ) != digitoVerificador1 ){
        return false;
    }
    
    //verificar segundo digito verificador
    somaDigitos = 0;
    for( multiplicador = 11 , digito = 0 ; multiplicador > 1 ; digito++ , multiplicador-- ){
        int digitoCpf = ( (int)cpf[digito] - 48 );
        somaDigitos += digitoCpf * multiplicador;
    }
    if( (11 - (somaDigitos % 11)) > 9 ){
        digitoVerificador2 = 0;
    }
    else{
        digitoVerificador2 = 11 - (somaDigitos % 11);
    }
    if( ( (int)cpf[10] - 48 ) != digitoVerificador2 ){
        return false;
    }
    
    return true;
}

void main(){
   char cpf[11];
   while(true){
       printf("\n\n\nDigite um cpf no formato XXXXXXXXXXX (11 digitos, apenas números) para verificar se ele é valido\n[s para encerrar o programa]\nCPF: ");
       scanf("%s",cpf);
       if(cpf[0]=='s'){
           break;
       }
       else if(isNumero(cpf)){
           if(verificar_CPF(cpf)){
               printf("\nO cpf %s é válido",cpf);
           }
           else{
               printf("\nO cpf %s não é válido",cpf);
           }
       }
       else{
           printf("\nO cpf deve conter apenas números!");
       }
   }
}
