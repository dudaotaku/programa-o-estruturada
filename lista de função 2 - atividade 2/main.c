#include <stdio.h>

float Maior( float a, float b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


float Media(float nota1, float nota2, float nota3)
{
    int cont = 0;
    float soma = 0;

    if (nota1 >= 0)
    {
        soma += nota1;
        cont++;
    }
    if (nota2 >= 0)
    {
        soma += nota2;
        cont++;
    }
    if (nota3 >= 0)
    {
        soma += nota3;
        cont++;
    }

    if (cont > 0)
    {
        return soma / cont;
    }
    else
    {
        return 0;
    }
}

int main()
{

    float nota1,nota2,nota3;
    float media3notas=0;
    float media2notas=0;
    float media=0;
    float maior;

    printf("\ndigite a nota 1: ");
    scanf("%f",&nota1);

    printf("\ndigite a nota 2: ");
    scanf("%f",&nota2);

    printf("\ndigite a nota 3: ");
    scanf("%f",&nota3);

    media3notas= Media(nota1,nota2,nota3);
    printf("\nmedia com 3 notas: %.2f\n", media3notas);

    media2notas = Media(Maior(nota1,nota2), Maior (Maior(nota1,nota2),nota3),-1);
    printf("\nMédia com as 2 notas mais altas: %.2f\n", media2notas);

    return 0;
}
