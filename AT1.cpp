//1. Escreva um programa que contenha duas variaveis inteiras. Leia essas variáveis do teclado. 
//Em seguida, compare seus endereços e exiba o conteudo do maior endereço.

#include<stdio.h>

void maior(int *pA, int *pB, int *end_maior){
    if(pA > pB){
        *end_maior = *pA;
    }
    else{
        *end_maior = *pB;
    }
}

int main(){
    int a, b;
    int endereco;

    scanf("%d %d", &a, &b);
    maior(&a, &b, &endereco);
    printf("A variavel de maior endereco eh: %d", endereco);

    return 0;
}
