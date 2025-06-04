#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int mBispo, mTorre, mRainha;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Informe a quantidade de casas que o bispo irá andar na diagonal para cima e à direita (5 max.): ");
    scanf("%d", &mBispo);
    if (mBispo > 0 && mBispo <= 5){
        printf("O bispo irá andar %d casa(s) na diagonal\n", mBispo);
        printf("Movimentação do Bispo:\n");
        int j = 0;
        while (j < mBispo) {
            printf("Cima, Direita\n");
            j++;
        }
    } else {
        printf("Entrada invalida, o bispo não irá se mover");
    }
    printf("\n");
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Informe a quantidade de casas que a torre irá andar para direita (5 max.): ");
    scanf("%d", &mTorre);
    if (mTorre > 0 && mTorre <= 5){
        printf("A torre irá andar %d casa(s) para a direita", mTorre);
        printf("\nMovimentação da Torre:\n");
        for (int i = 0; i < mTorre; i++) {
            printf("Direita\n");
        }
    } else {
        printf("Entrada invalida, a torre não irá se mover");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Informe a quantidade de casas que a rainha irá andar para a esquerda (8 max.): ");
    scanf("%d", &mRainha);
    if (mRainha > 0 && mRainha <= 8){
        printf("Movimentação da Rainha:\n");
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < mRainha);
    } else {
        printf("Entrada invalida, a rainha não irá se mover");
    }
    


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
