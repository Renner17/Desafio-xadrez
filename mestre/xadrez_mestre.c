#include <stdio.h>
#include <locale.h>

// ===============================
// Função recursiva para a Torre
// ===============================
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ===============================
// Função recursiva para a Rainha
// ===============================
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ===============================
// Função recursiva para o Bispo
// + loops aninhados para diagonal
// ===============================
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo = movimento vertical (Cima)
    for (int i = 0; i < 1; i++) { 
        // Loop interno = movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ===============================
// Movimento do Cavalo (loops complexos)
// ===============================
void moverCavalo(int casasVertical, int casasHorizontal) {
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    // Loop externo = movimento vertical
    for (int i = 1; i <= casasVertical; i++) {
        if (i == 2) {
            printf("Cima\n");
            continue; // no último movimento vertical, pula direto
        }
        printf("Cima\n");
    }

    // Loop interno = movimento horizontal
    for (int j = 1; j <= casasHorizontal; j++) {
        if (j > 1) break; // garante que só vai 1 casa
        printf("Direita\n");
    }
}

// ===============================
// Função principal
// ===============================
int main() {
    setlocale(LC_ALL, ""); // permite acentos no console

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasVerticalCavalo = 2;
    int casasHorizontalCavalo = 1;

    // Torre com recursividade
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo com recursividade + loops aninhados
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(casasBispo);
    printf("\n");

    // Rainha com recursividade
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo com loops complexos
    moverCavalo(casasVerticalCavalo, casasHorizontalCavalo);

    return 0;
}
