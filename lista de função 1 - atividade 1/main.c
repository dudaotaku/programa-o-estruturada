#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha(int numero)
{
    int i;
    for (i=0; i< numero; i++){
        printf("=");
    }
    printf("\n");
}
int intervalo (int menor, int maior)
{
    int i;
    int soma=0;
    for (i=menor; i<=maior; i++){
            if(i>=maior){
                soma=soma+i;
            }
        soma=soma+i;

    }
    return soma;
}
int main()
{
int n, n1, n2,esc, resultado;
printf(" tamanho da linha: ");
scanf("%d", &n);
DesenhaLinha(n);

 do{

printf("\ndigite o primeiro numero: ");
scanf("%d",&n1);

printf("\ndigite o segundo numero: ");
scanf("%d",&n2);

resultado= intervalo(n1, n2);

printf("\n soma dos intervalos: %d", resultado);
printf("\n deseja continuar?  0 = nao 1 = sim");
scanf("%d",&esc);

}while (esc!=0);

    return 0;
}
