#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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
    int casasTorre = 5;   // Número de casas que a Torre vai se mover (para a direita)
    int casasBispo = 5;   // Número de casas que o Bispo vai se mover (diagonal para cima e direita)
    int casasRainha = 8;  // Número de casas que a Rainha vai se mover (para a esquerda)

    // ==============================
    // Movimento da Torre (usando for)
    // ==============================

    printf("=== Movimento da Torre ===\n");   // Exibe o título da seção no console

    // Loop for: repete de 1 até casasTorre (5 vezes)
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");   // A cada repetição, imprime "Direita", simulando a Torre andando uma casa
    }

    // ==============================
    // Movimento do Bispo (usando while)
    // ==============================

    printf("\n=== Movimento do Bispo ===\n");   // Exibe o título da seção no console

    int i = 1;  // Variável de controle para o loop while, começa em 1

    // Enquanto i for menor ou igual ao número de casas que o Bispo deve andar (5)
    while(i <= casasBispo) {
        printf("Cima, Direita\n");  // Imprime "Cima, Direita", pois o Bispo anda em diagonal
        i++; // Incrementa i em 1, para avançar no movimento
    }

    // ==============================
    // Movimento da Rainha (usando do-while)
    // ==============================

    printf("\n=== Movimento da Rainha ===\n");   // Exibe o título da seção no console

    int j = 1;  // Variável de controle para o loop do-while, começa em 1

    // Estrutura do-while: executa pelo menos uma vez e depois verifica a condição
    do {
        printf("Esquerda\n");   // Imprime "Esquerda", pois a Rainha anda para o lado desejado
        j++;   // Incrementa j em 1, para contar a casa percorrida
    } while(j <= casasRainha);  // Repete enquanto j for menor ou igual a 8 (casasRainha)

    return 0;
}
