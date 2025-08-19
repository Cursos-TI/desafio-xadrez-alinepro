#include <stdio.h>

//Recursividade para movmentar a torre
void moverTorre(int numCasa){
    if (numCasa>0){
    printf("%d\n", numCasa);
    moverTorre(numCasa-1);
    }
}
void moverBispo(int i){
    if(i > 0){
        printf("Movendo Bispo %d casas para cima.\n", i);
        moverBispo(i - 1);
    }
}
void moverRainha(int j){
    if(j > 0){
        printf("Movendo Rainha %d casas para a esquerda.\n", j);
        moverRainha(j - 1);
    }
}
int main() {
    moverTorre(5);
    moverBispo(5);
    moverRainha(8)
    int mov = 1;  //movimento do cavalo

// Mover a Torre usando for (em comentário, devido ao uso de recursividade)
    //for (numCasa = 1; numCasa <= 5; numCasa++) {
         //printf("Movendo Torre %d casas para direita.\n", numCasa);
    //}
            
    // Bispo: usando loop aninhado, mais externo na vertical, mais interno na horizontal
    int n = 1;
        do{
            int m = 1;
            do{
                printf("Movendo Bispo %d casas para esquerda.\n", m);
                m++;
            }  while (m <= 5);    
        printf("Movendo Bispo %d casas para cima.\n", n);
        n++;
        } while (n <= 5);
    
    // Rainha: usando while
   // while(j <= 8){
     //   printf("Movendo Rainha %d casas para a esquerda.\n",j);
       //     j++; 
    }

       // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical. Uso de loop com continue e break para o cavalo

    while (mov--){
        for(int l = 1; l <= 2; l++){
        if(l == 1) continue;
            if(l ==2) break;
            printf("Movendo Cavalo %d casa(s) para Cima.\n",l);
        }
        printf("Movendo Cavalo para direita\n");
    }
            printf("Saindo do jogo...\n");

    return 0;
}      
   
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

