#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100


int solicitarNumero(int numero)
{
    printf("digite um numero: ");
    scanf("%d", &numero);
    return numero;
}

void vetor (int vetor[],int tamanho)
{
    for( int i=0; i<tamanho; i++)
    {
        if(vetor [i]!= 0)
        {
            printf("%d", vetor[i]);
        }
    }
    printf("\n");
}
verificaPositicoNegatico (int numero)
{
    if(numero>=0)
    {
        return 1;
    }
    else
    {
        return -1;

    }

}
void trocarNumero(int vetor[],int tamanho, int numeroAntigo, int numeroNovo){

for(int i=0; i<tamanho;i++){
if(vetor[i]==numeroAntigo){
    vetor[i]=numeroNovo;

    printf("numero %d trocadopor %d",numeroAntigo,numeroNovo);
    return;
}
}

printf("numero %d não encontrado no vetor\n", numeroAntigo);

}
int main()
{
    return 0;
}
