#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a Direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na Diagonal (Cima Direita)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha - 8 casas para a Esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo - 2 casas para Baixo e 1 para Esquerda
    printf("\nMovimento do Cavalo:\n");

    const int movimentos_baixo = 2;
    const int movimentos_esquerda = 1;

    // Loop externo: movimento para baixo 
    for (int i = 0; i < movimentos_baixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno: movimento para esquerda 
    int l = 0;
    while (l < movimentos_esquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
