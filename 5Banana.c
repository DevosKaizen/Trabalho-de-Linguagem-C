#include <stdio.h> //Codigo desenvolvido por AndrewDevos 72409 e HenriqueStrieder 157642
#include <string.h>

int main() {
    char frase[100]; // Vetor para a frase (tamanho máximo de 100 caracteres)
    char palavra[20]; // Vetor para a palavra (tamanho máximo de 20 caracteres)
    int contador = 0; // Inicializa o contador de ocorrências
	int i = 0;
	int j = 0;
	int aux = 0;
	
    // Solicita ao usuario que insira a frase
    printf("Digite uma frase: ");
    gets(frase); // Lê a frase (incluindo espaços em branco)

    // Solicita ao usuário que insira a palavra a ser procurada
    printf("Digite uma palavra: ");
    gets(palavra); // Lê a palavra (incluindo espaços em branco)

    // Compara a palavra com a frase
    int tamanhoFrase = strlen(frase);
    int tamanhoPalavra = strlen(palavra);

    for (i = 0; i <= tamanhoFrase - tamanhoPalavra; i++) {
        // Verifica se a palavra ocorre na posição atual da frase
        int igual = 1;
        for (j = 0; j < tamanhoPalavra; j++) {
            if (frase[i + j] != palavra[j]) {
                igual = 0;
                break; // Se não for igual, saimos do loop interno
            }
        }
        if (igual) {
            contador++; // Se a palavra ocorre na posição atual, incrementamos o contador
        }
    }

    // Imprime o resultado
    printf("A palavra '%s' ocorre %d vezes na frase.\n", palavra, contador);

    return 0;
}

