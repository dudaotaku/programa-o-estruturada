3- #include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor para var1: ");
    scanf("%d", &var1);
    printf("Digite o valor para var2: ");
    scanf("%d", &var2);

    printf("\nEndereço de var1: %p\n", (void*)&var1);
    printf("Endereço de var2: %p\n", (void*)&var2);

    if (&var1 > &var2) {
        printf("O maior endereço é de var1, cujo conteúdo é: %d\n", var1);
    } else {
        printf("O maior endereço é de var2, cujo conteúdo é: %d\n", var2);
    }

    return 0;
}