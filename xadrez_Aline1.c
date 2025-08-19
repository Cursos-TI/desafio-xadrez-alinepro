#include <stdio.h>

// Recursividade para movimentar a torre, o bispo e a rainha
void moverTorre(int numCasa) {
    if (numCasa > 0) {
        moverTorre(numCasa - 1);
        printf("Movendo Torre %d casa(s).\n", numCasa);

    }
}

void moverBispo(int i) {
    if (i > 0) {
        moverBispo(i - 1);
        printf("Movendo Bispo %d casa(s) para direita.\n", i);

    }
}

void moverRainha(int j) {
    if (j > 0) {
        moverRainha(j - 1);
        printf("Movendo Rainha %d casa(s) para a esquerda.\n", j);

    }
}

int main() {
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

    // Bispo: usando loop aninhado, mais externo na vertical, mais interno na horizontal
    for (int n = 1; n <= 5; n++) {
        for (int m = 1; m <= 5; m++) {
            printf("Movendo Bispo %d casa(s) para esquerda.\n", m);
        }
        printf("Movendo Bispo %d casa(s) para cima.\n", n);
    }

    // Loop para representar a movimentação do cavalo
    for (int l = 1; l <= 2; l++) {
        if (l == 1) {
            printf("Movendo Cavalo %d casa(s) para cima.\n", l);
            printf("Movendo Cavalo para direita\n");
        }
        if (l == 2) {
            printf("Movendo Cavalo %d casa(s) para cima.\n", l);
            printf("Movendo Cavalo para esquerda\n");
        }
    }

    printf("Saindo do jogo...\n");
