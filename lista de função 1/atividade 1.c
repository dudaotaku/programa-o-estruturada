#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha(int numero)
{
    int i;
    for (i = 0; i< numero; i++){
        printf("=");
    }
}
int intervalo (int menor, int maior)
{
    int i, soma=0;
    for (i=menor; i<=maior; i++){
        soma=soma+1;
    }
    return soma;
}
int main()
{
int n, n1, n2,esc, resultado;
printf(" tamanho da linha");
scanf("d%", &n);

 do{
printf("digite o primeiro numero");
scand("d%",&n1);
printf("digite o segundo numero");
scand("d%",&n2);
DesenhaLinha(n);

resultado= intervalo(n1, n2);

printf("\n soma dos intervalos: %d", intervalo(n1,n2));
printf("\n deseja continuar?  0 = nao 1 = sim");
scanf("%d",&esc);

}while (esc!=0);

    return 0;
}
