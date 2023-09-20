#include <stdio.h> //Codigo desenvolvido por AndrewDevos 72409 e HenriqueStrieder 157642

int main() {
    int x = 0;
    int i = 0;
    
    // Recebe o n�mero a ser verificado
    printf("\nDado um inteiro positivo X, verificar se n e primo.\n");
    printf("Digite o numero base a ser verificado: ");
    scanf("%d", &x);
    printf("\n");

    if (x <= 1) {
        printf("X tem que ser um numero maior que 1\n");
    } else {
        int primo = 1; // Assume que X e primo

        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                primo = 0; // Se encontrarmos um divisor, X nao e primo
                break;
            }
        }

        if (primo) {
            printf("%d e primo.\n", x);
        } else {
            printf("%d nao e primo.\n", x);
        }
    }

    return 0;
}
