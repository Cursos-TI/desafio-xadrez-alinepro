#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int numCasa;
char nomePeca,nomePeca1, nomePeca2, nomePeca3, direita, cima, esquerda;

    printf("Digite o número da peça que deseja mover!\n");
    printf(" 1. Torre\n",nomePeca1);
    printf(" 2. Bispo\n",nomePeca2);
    printf(" 3. Rainha\n"nomePeca3);
    printf(" 4. Sair\n");
    
    Switch (nomePeca)
        case 1:
            while(numCasa<=5){
            printf("Digite o numero de casas para mover %c à %c.\n",nomePeca1, direita);
            scanf("%d", &numCasa);
            numCasa++;
            printf("Você moveu %d pra a direita\n");
            }
    break;
    case 2:
        do{
            printf("Digite o numero de casas para mover %c à %c.\n",nomePeca2, direita);            
            scanf("%d", &numCasa);
            numCasa++;
        } while(numCasa<=5){
            printf("Você está movendo %d casas para %c e %c, na diagonal.\n", cima, direita)
            }
    break;        
    case 3:
            for(numCasa <= 8; nomePeca3 >=0; numCasa -=8){
            printf("Digite o numero de casas para mover %c à %c.\n",nomePeca3, esquerda);            
            scanf("%d", &numCasa);
            }
    break;
    default:
    printf("Saindo do jogo...");            
            
        
    
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
