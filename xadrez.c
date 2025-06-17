#include <stdio.h>


int main() {
    // === Movimentação da Torre ===
    printf("Movimentação da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // === Movimentação do Bispo ===
    printf("Movimentação do Bispo (5 casas na diagonal para cima e à direita):\n");
    int passosBispo = 1;
    while (passosBispo <= 5) {
        printf("Cima Direita\n");
        passosBispo++;
    }

    printf("\n");

    // === Movimentação da Rainha ===
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    int passosRainha = 1;
    do {
        printf("Esquerda\n");
        passosRainha++;
    } while (passosRainha <= 8);

    printf("\n");

    // === Movimentação do Cavalo ===
    printf("Movimentação do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    int i;
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    int j = 1;
    while (j <= 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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

    
