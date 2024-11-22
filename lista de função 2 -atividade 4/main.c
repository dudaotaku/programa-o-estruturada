#include <stdio.h>
#include <stdlib.h>

int Maior( int numero_1, int numero_2){
   if(numero_1 > numero_2){
    return numero_1;
   }else{
   return numero_2;
}
}
void ordenarVetor(int vetor[], int tamanho, int ordem) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if ((ordem == 1 && Maior(vetor[i], vetor[j]) == vetor[j]) ||
                (ordem == 2 && Maior(vetor[i], vetor[j]) == vetor[i])) {

                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main()
{

     int numero [10];
     int ordem;

for (int i = 0; i < 10; i++) {
    printf("digite os numero: \n");
    scanf("%d", &numero[i]);
 }
 printf("ordem crescente (1), decrescente (2) ");
 scanf("%d",& ordem);

  if(ordem !=1 && ordem !=2){

    printf("Opção inválida! O programa será encerrado.\n");
        return 0;
  }

 ordenarVetor(numero, 10, ordem);

    printf("\nVetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numero[i]);
    }
    printf("\n");




    return 0;
}


