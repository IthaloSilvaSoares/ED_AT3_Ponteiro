//5. Crie uma função que receba por parâmetro um vetor de números inteiros, 
//o tamanho do vetor e os endereços de duas variáveis inteiras (que podemos chamar de min e max). 
//Ao passar essas variáveis para a função seu programa deverá analisar qual é o maior e o menor elemento do vetor 
//e depositar esses elementos nas variáveis do parâmetro.

 #include <stdio.h>

void maiorMenor(int vetor[], int tamanho, int *pMin, int *pMax){
      for(int i = 0; i < tamanho; i++){
         if(vetor[i] >  *pMax){
            *pMax = vetor[i];
         }
         if(vetor[i] < *pMin){
            *pMin = vetor[i]; 
         }
      }
}

 int main(){

      int tamanho;
      printf("Digite o tamanho do vetor: ");
      scanf("%d", &tamanho);
      int vetor[tamanho], min, max;
      for(int i = 0; i < tamanho; i++){
         scanf("%d", &vetor[i]);
      }
      min = vetor[0];
      max = vetor[0];
      maiorMenor(vetor, tamanho, &min, &max);
      printf("Menor = %d\n", min);
      printf("Maior = %d\n", max);
    
    return 0;
 }
