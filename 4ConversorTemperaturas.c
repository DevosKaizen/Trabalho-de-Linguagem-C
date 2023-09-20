#include <stdio.h> //Codigo desenvolvido por AndrewDevos 72409 e HenriqueStrieder 157642

int main() {
    double n = 0;
    double temp = 0;

    // Recebe os valores a calcular
    printf("\nDigite uma temperatura em Fahrenheit para ser convertida.\n");
    printf("Digite a temperatura: ");
    scanf("%lf", &n);
    printf("\n");

    temp = (n - 32) * 5 / 9;
    printf("A temperatura em Celsius sao: %lf\n", temp);
    
    return 0;
}
