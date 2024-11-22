5- #include <stdio.h>

void reorganizarValores(int *a, int *b) {
    if (*a < *b) {
        int temp = *a; 
        *a = *b;      
        *b = temp;     
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("\nAntes da reorganização:\n");
    printf("Valor 1 = %d\n", valor1);
    printf("Valor 2 = %d\n", valor2);

    reorganizarValores(&valor1, &valor2);

    printf("\nApós a reorganização:\n");
    printf("Maior valor (Valor 1) = %d\n", valor1);
    printf("Menor valor (Valor 2) = %d\n", valor2);

    return 0;
}