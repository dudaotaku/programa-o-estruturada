#include <stdio.h>

#define MAX_SIZE 100

int solicitarNumero() {
    int numero;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    return numero;
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}

int verificarPositivoNegativo(int numero) {
    if (numero >= 0) {
        return 1;
    } else {
        return -1;
    }
}

void trocarNumero(int vetor[], int tamanho, int numeroAntigo, int numeroNovo) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numeroAntigo) {
            vetor[i] = numeroNovo;
            printf("N�mero %d trocado por %d.\n", numeroAntigo, numeroNovo);
            return;
        }
    }
    printf("N�mero %d n�o encontrado no vetor.\n", numeroAntigo);
}

int main() {
    int positivos[MAX_SIZE] = {0};
    int negativos[MAX_SIZE] = {0};
    int tamanhoPos = 0, tamanhoNeg = 0;
    char opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Adicionar numero\n");
        printf("2. Imprimir vetores\n");
        printf("3. Trocar numero no vetor\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1': {
                int numero = solicitarNumero();
                if (verificarPositivoNegativo(numero) == 1) {
                    if (tamanhoPos < MAX_SIZE) {
                        positivos[tamanhoPos++] = numero;
                        printf("N�mero %d adicionado aos positivos.\n", numero);
                    } else {
                        printf("Vetor de positivos cheio!\n");
                    }
                } else {
                    if (tamanhoNeg < MAX_SIZE) {
                        negativos[tamanhoNeg++] = numero;
                        printf("N�mero %d adicionado aos negativos.\n", numero);
                    } else {
                        printf("Vetor de negativos cheio!\n");
                    }
                }
                break;
            }
            case '2': {
                printf("N�meros Positivos: ");
                imprimirVetor(positivos, tamanhoPos);
                printf("N�meros Negativos: ");
                imprimirVetor(negativos, tamanhoNeg);
                break;
            }
            case '3': {
                int numeroAntigo, numeroNovo;
                printf("Digite o n�mero a ser trocado: ");
                scanf("%d", &numeroAntigo);
                printf("Digite o novo n�mero: ");
                scanf("%d", &numeroNovo);
                if (verificarPositivoNegativo(numeroAntigo) == 1) {
                    trocarNumero(positivos, tamanhoPos, numeroAntigo, numeroNovo);
                } else {
                    trocarNumero(negativos, tamanhoNeg, numeroAntigo, numeroNovo);
                }
                break;
            }
            case '4': {
                printf("Saindo do programa.\n");
                return 0;
            }
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    }
}
