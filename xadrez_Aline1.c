#include <stdio.h>

int main() {
    int numCasa = 1;
    int i = 1;
    int r = 1;
    int mov = 1;  //movimento do cavalo

    // Mover a Torre usando for
    for (numCasa = 1; numCasa <= 5; numCasa++) {
         printf("Movendo Torre %d casas para direita.\n", numCasa);
    }
            
    // Bispo: usando do-while
    do {    
        printf("Movendo Bispo %d casas na diagonal cima-direita.\n", i);
        i++;
        }  while (i <= 5);         
    
    // Rainha: usando while
    while(r <= 8){
        printf("Movendo Rainha %d casas para a esquerda.\n",r);
            r++; 
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    while (mov--){
        for(int j = 0; j < 2; j++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
    }
            printf("Saindo do jogo...\n");

    return 0;
}      
   
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
