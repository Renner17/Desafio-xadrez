#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Permite acentos no console (Windows/Linux)

    // ==============================
    // Definição do número de casas
    // ==============================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ==============================
    // Movimento da Torre (for loop)
    // ==============================
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ==============================
    // Movimento do Bispo (while loop)
    // ==============================
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // ==============================
    // Movimento da Rainha (do-while loop)
    // ==============================
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
