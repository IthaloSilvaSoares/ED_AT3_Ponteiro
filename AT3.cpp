//3. Escreva uma função que dado um número real passado como parâmetro, 
//retorne a parte inteira e a parte fracionária deste número. 
//Escreva um programa que chama esta função.

#include <stdio.h>

void questao(double *x){
    printf("Parte inteira: %d\n", (int) *x);
    printf("Parte fracionada: %.2lf\n", *x - ((int) *x));
}

int main(){

    double y;
    printf("Digite um numero: ");
    scanf("%lf", &y);

    questao(&y);

    return 0;
}
