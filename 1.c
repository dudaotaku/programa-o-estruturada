#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char caractere = 'A';

    int *ptrInteiro;
    float *ptrReal;
    char *ptrChar;

    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrChar = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n\n", caractere);

    *ptrInteiro = 20;
    *ptrReal = 10.5;
    *ptrChar = 'B';

    printf("Valores após modificação via ponteiros:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
