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
    int numero_1=0;
    int numero_2=0;
    int maior=0;

    printf("digite um numero: \n");
    scanf("%d",& numero_1);

     printf("digite um numero: \n");
    scanf("%d",& numero_2);

    maior = Maior(numero_1,numero_2);

    printf("a maior numero é: %d\n", maior);

    return 0;
}
