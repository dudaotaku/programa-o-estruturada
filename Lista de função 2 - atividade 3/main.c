#include <stdio.h>
#include <stdlib.h>

int Maior( int numero_1, int numero_2){
   if(numero_1 > numero_2){
    return numero_1;
   }else{
   return numero_2;
}
}
int main()
{
 int numero [10];
 int maior_numero;

 for(int i=0; i<10; i++){
    printf("digite os numero: \n");
    scanf("%d", &numero[i]);
 }

  maior_numero = numero[0];

  for(int i=1; i<10;i++){
    maior_numero= Maior(maior_numero, numero[i]);
  }
  for(int i=0; i<10; i++){
        printf("%d ", numero[i]);
  }

printf("\n\nO maior número é: %d\n", maior_numero);

    return 0;
}
