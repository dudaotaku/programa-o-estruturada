#include <stdio.h>
#include <stdlib.h>

int percurso (distancia, gasolina, consumo)
{

              return distancia/gasolina;
}

void mensagem (int resultado)
{
    if (resultado<8)
    {

        printf("\nVenda o Carro!!\n");

    }
    else if(resultado < 8 && resultado < 12)
    {

        printf("Econ�mico!!");

    }
    else
    {

        printf("Super Econ�mico!!");

    }

return 0;
}


int main()
{
    int distancia=0;
    int gasolina=0;
    int resultado =0;

    printf("digite a distancia percorrida em km: ");
    scanf("%d",& distancia);

    printf("digite a qauntidade de gasolina gasta: ");
    scanf("%d", & gasolina);

    resultado = percurso (distancia,gasolina);

    mensagem(resultado);



    return 0;
}
