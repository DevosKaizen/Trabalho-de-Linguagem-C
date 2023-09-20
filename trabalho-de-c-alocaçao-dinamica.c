
#include <stdio.h> //Codigo desenvolvido por AndrewDevos 72409 e HenriqueStrieder 157642
#include <stdlib.h>
#include <string.h>

// Struct para representar um produto
struct Produto {
    char nome[30]; /* Nome do produto */
    int codigo;    /* Codigo do produto */
    double preco;  /* Preco do produto */
};

// Struct para representar um no da lista
struct Node {
    struct Produto produto;
    struct Node* next;
};

// Prototipos das funoes
void adicionarProduto(struct Node** lista);
void exibirLista(struct Node* lista);
void buscarPorNome(struct Node* lista, char* nome);
void liberarMemoria(struct Node* lista);

int main() {
    struct Node* lista = NULL;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Exibir Lista\n");
        printf("3. Buscar por Nome\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(&lista);
                break;
            case 2:
                exibirLista(lista);
                break;
            case 3: {
                char nomeBusca[30];
                printf("Digite o nome a ser buscado: ");
                scanf("%s", nomeBusca);
                buscarPorNome(lista, nomeBusca);
                break;
            }
            case 4:
                liberarMemoria(lista);
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

// Funoo para adicionar um produto o lista
void adicionarProduto(struct Node** lista) {
    struct Node* novoProduto = (struct Node*)malloc(sizeof(struct Node));
    if (novoProduto == NULL) {
        printf("Erro na alocaoo de memoria.\n");
        return;
    }

    printf("Digite o nome do produto: ");
    scanf("%s", novoProduto->produto.nome);
    printf("Digite o codigo do produto: ");
    scanf("%d", &novoProduto->produto.codigo);
    printf("Digite o preoo do produto: ");
    scanf("%lf", &novoProduto->produto.preco);

    novoProduto->next = *lista;
    *lista = novoProduto;
}

// Funoo para exibir a lista completa de produtos
void exibirLista(struct Node* lista) {
    printf("\nLista de Produtos:\n");
    while (lista != NULL) {
        printf("Nome: %s\n", lista->produto.nome);
        printf("Codigo: %d\n", lista->produto.codigo);
        printf("Preco: %.2lf\n\n", lista->produto.preco);
        lista = lista->next;
    }
}

// Funoo para buscar um produto pelo nome e exibi-lo
void buscarPorNome(struct Node* lista, char* nome) {
    while (lista != NULL) {
        if (strcmp(lista->produto.nome, nome) == 0) {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\n", lista->produto.nome);
            printf("Codigo: %d\n", lista->produto.codigo);
            printf("Preco: %.2lf\n", lista->produto.preco);
            return; // Produto encontrado, sai da funoo
        }
        lista = lista->next;
    }
    printf("\nProduto nao encontrado.\n");
}

// Funoo para liberar a memoria alocada dinamicamente
void liberarMemoria(struct Node* lista) {
    while (lista != NULL) {
        struct Node* temp = lista;
        lista = lista->next;
        free(temp);
    }
}

