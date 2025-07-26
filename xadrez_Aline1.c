#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int numCasa, i;
    int opcao;
    char direcao;

    printf("Digite o número da peça que deseja mover!\n");
    printf(" 1. Torre\n");
    printf(" 2. Bispo\n");
    printf(" 3. Rainha\n");
    printf(" 4. Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Torre: usando while
            printf("Você escolheu Torre.\n");
            printf("Digite a direção (d = direita, e = esquerda, c = cima, b = baixo): ");
            scanf(" %c", &direcao);
            numCasa = 1;
            while (numCasa <= 5) {
                printf("Movendo Torre %d casas para %c.\n", numCasa, direcao);
                numCasa++;
            }
            break;
        case 2:
            // Bispo: usando do-while
            printf("Você escolheu Bispo.\n");
            printf("Digite a direção diagonal (1 = cima-direita, 2 = cima-esquerda, 3 = baixo-direita, 4 = baixo-esquerda): ");
            scanf("%d", &i);
            numCasa = 1;
            do {
                printf("Movendo Bispo %d casas na diagonal %d.\n", numCasa, i);
                numCasa++;
            } while (numCasa <= 5);
            break;
        case 3:
            // Rainha: usando for
            printf("Você escolheu Rainha.\n");
            printf("Digite a direção (d = direita, e = esquerda, c = cima, b = baixo, x = diagonal): ");
            scanf(" %c", &direcao);
            for (i = 1; i <= 5; i++) {
                printf("Movendo Rainha %d casas para %c.\n", i, direcao);
            }
            break;
        default:
            printf("Saindo do jogo...\n");
    }
    return 0;
}        
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
