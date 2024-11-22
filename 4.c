4- #include <stdio.h>

void trocarConteudo(int *a, int *b) {
    int temp = *a;  
    *a = *b;       
    *b = temp;      
}

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    trocarConteudo(&a, &b);

    
    printf("\nApós a troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
