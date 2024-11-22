#include <stdio.h>
#include <stdlib.h>


int escolherFigura (char* texto)
{
    int medida;
    printf("\n%s: ",texto);
    scanf("%d", &medida);

    return medida;
}


float calcularTriangulo (float base, float altura)
{
    float valor;
    valor = (base*altura)/2;

    return valor;
}
float calcularRetangulo (float base, float altura)
{
    float valor;
    valor = base * altura;
    return valor;
}

float calcularCirulo (float raio)
{
    float valor, pi=3.14;
    valor = pi*(raio*raio);
    return valor;
}

void imprimir( char* texto, float resultado)
{
    printf("\n%s: %.2f", texto, resultado);
}


int main()
{
    float resultado=0;
    float calculo=0;
    float fim=1;
    float base=1;
    float altura=1;
    float raio=1;
    float figura=1;


    do
    {
        printf("\ndigite 1-triangulo 2-retangulo 3-circulo\n");
        scanf("%f",&figura);

        if(figura==1)
        {
            base = escolherFigura ("digite a base");
            altura= escolherFigura ("digite a altura");
            calculo=calcularTriangulo (base,altura);
            imprimir ("a área do triangulo é ", calculo );
        }
        else if (figura==2)
        {
            base = escolherFigura("digite a base");
            altura= escolherFigura ("digite a altura");
            calculo= calcularRetangulo(base,altura);
            imprimir("a área do retangulo é ", calculo );

        }
        else
        {
            raio=  escolherFigura ("digite o raio");
            calculo=calcularCirulo(raio);
            imprimir("a área do circulo é ", calculo);

        }
        printf("\ndigite 1 para encerrar e 0 para encerrar: ");
        scanf("%f", &fim);

    }
    while( fim == 0);

    return 0;
}


