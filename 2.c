2- #include <stdio.h>

int main() {
    int var1 = 10, var2 = 20;

    printf("Endereço de var1: %p\n", (void*)&var1);
    printf("Endereço de var2: %p\n", (void*)&var2);

    if (&var1 > &var2) {
        printf("O maior endereço é de var1: %p\n", (void*)&var1);
    } else {
        printf("O maior endereço é de var2: %p\n", (void*)&var2);
    }

    return 0;
}





