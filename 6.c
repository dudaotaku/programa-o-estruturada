6- #include <stdio.h>

void calcularDobroESoma(int *a, int *b, int *soma) {
    *a = *a * 2;           
    *b = *b * 2;           
    *soma = *a + *b;      
}

int main() {
    int a, b, soma;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    calcularDobroESoma(&a, &b, &soma);

    printf("\nResultados:\n");
    printf("Dobro de A: %d\n", a);
    printf("Dobro de B: %d\n", b);
    printf("Soma do dobro de A e B: %d\n", soma);

    return 0;
}

