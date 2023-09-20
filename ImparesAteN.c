#include <stdio.h>

int main() {
    int n;

    // Solicita ao usuario que insira um numero inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero inserido nao e positivo.\n");
    } else {
        printf("Os inteiros impares ate %d sao:\n", n);
        for (int i = 1; i <= n; i += 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}

