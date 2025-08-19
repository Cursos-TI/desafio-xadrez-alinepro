#include <stdio.h>

//Recursividade para movmentar a torre, o bispo e a rainha
void moverTorre(int numCasa){
    if (numCasa > 0){
    printf("%d\n", numCasa);
    moverTorre(numCasa - 1);
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
    
 // Loop aninhado de condição multipla para representar a movimentação horizontal e outro vertical. Uso de loop com continue e break para o cavalo

    for (int l = 1, mov =1; l <= 2 && mov = 1; l++,mov++){
        if(l == 1) continue;
            if(l ==2) break;
            printf("Movendo Cavalo %d casa(s) para Cima.\n",l);
        }
        printf("Movendo Cavalo para direita\n");
    }
    printf("Saindo do jogo...\n");

    return 0;
}      
   
    
