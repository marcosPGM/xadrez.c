#include <stdio.h>

int main() {
    // =========================
    // Torre - movimento para a direita
    // Usando o loop "for"
    // =========================
    int casasTorre = 5; // número de casas que a torre deve andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // Bispo - movimento na diagonal (cima + direita)
    // Usando o loop "while"
    // =========================
    int casasBispo = 5; // número de casas que o bispo deve andar
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // =========================
    // Rainha - movimento para a esquerda
    // Usando o loop "do-while"
    // =========================
    int casasRainha = 8; // número de casas que a rainha deve andar
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}