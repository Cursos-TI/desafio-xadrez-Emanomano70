#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;  // Condição de parada
    printf("Direita\n");
    moverTorre(passoAtual + 1, totalPassos);  // Chamada recursiva
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;  // Condição de parada
    printf("Esquerda\n");
    moverRainha(passoAtual + 1, totalPassos);  // Chamada recursiva
}

// Função recursiva para o Bispo: controla as diagonais
void moverBispoRecursivo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passoAtual + 1, totalPassos);
}

// Função com loops aninhados para o Bispo (requisito: loop externo vertical, interno horizontal)
void moverBispoComLoops(int totalPassos) {
    printf("Movimentação detalhada do Bispo (usando loops aninhados):\n");
    for (int vertical = 1; vertical <= totalPassos; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

// Movimentação do Cavalo: 2 casas para cima e 1 para a direita, usando loops complexos
void moverCavalo() {
    printf("Movimentação do Cavalo (2 casas para cima e 1 para a direita):\n");

    int direcaoVertical = 0;
    int direcaoHorizontal = 0;

    for (int i = 1; i <= 3; i++) {  // Controla o número de etapas (máx 3: 2 verticais + 1 horizontal)
        if (i <= 2) {
            for (int j = 0; j < 1; j++) {  // Loop interno para cada movimento vertical
                printf("Cima\n");
                direcaoVertical++;
                if (direcaoVertical == 2) break;  // Parar após 2 movimentos para cima
            }
        } else {
            int k = 0;
            while (k < 1) {
                printf("Direita\n");
                direcaoHorizontal++;
                k++;
            }
        }
    }
}

// Função principal
int main() {
    // === Torre ===
    printf("Movimentação da Torre (5 casas para a direita):\n");
    moverTorre(1, 5);
    printf("\n");

    // === Bispo ===
    printf("Movimentação do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispoRecursivo(1, 5);
    printf("\n");

    // === Rainha ===
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    moverRainha(1, 8);
    printf("\n");

    // === Cavalo ===
    moverCavalo();
    printf("\n");

    // === Bispo com Loops Aninhados ===
    moverBispoComLoops(5);
    printf("\n");

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

    
