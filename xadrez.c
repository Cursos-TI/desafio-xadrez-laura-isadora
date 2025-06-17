#include <stdio.h>

// Função recursiva para mover a Torre para a Direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha para a Esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo (Cima Direita)
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Movimento do Cavalo com loops aninhados e múltiplas variáveis/condições
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    const int movimentos_cima = 2;
    const int movimentos_direita = 1;

    int i, j;
    for (i = 0; i < 3; i++) {
        if (i >= movimentos_cima) break; // Controla movimento vertical
        printf("Cima\n");

        for (j = 0; j < 2; j++) {
            if (j >= movimentos_direita) continue; // Controla movimento horizontal
            if (i == 1 && j == 0) {
                printf("Direita\n");
                break; // Finaliza após movimento em L
            }
        }
    }
}

// recursividade e loops aninhados para o Bispo
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) { // Simula movimento horizontal acoplado ao vertical
            printf("Cima Direita\n");
        }
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo com recursão
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(casasBispo);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo (cima, cima, direita) 
    moverCavalo();

    // Bispo com loops aninhados 
    moverBispoComLoops(casasBispo);

    return 0;
}
