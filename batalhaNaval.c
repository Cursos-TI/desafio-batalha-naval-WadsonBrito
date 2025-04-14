#include <stdio.h>

#define TAMANHO 10
#define TAM_NAVIO 3
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() { 

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa tudo com 0

    // Vetores representando os navios
    int navio1[TAM_NAVIO] = {3, 3, 3}; // Horizontal
    int navio2[TAM_NAVIO] = {3, 3, 3}; // Vertical

    // Coordenadas iniciais dos navios
    int linha1 = 7, coluna1 = 10; // navio1 horizontal
    int linha2 = 5, coluna2 = 7; // navio2 vertical

    // Posicionando o navio1 horizontalmente
    for (int i = 0; i < TAM_NAVIO; i++){
        tabuleiro[linha1][coluna1 + i] = navio1[i];
    }

    // Posicionando o navio2 verticalmente
    for (int i = 0; i < TAM_NAVIO; i++){
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }
    
    // Exibindo o Tabuleiro
    printf("##### TABULEIRO BATALHA NAVAL #####\n\n");
    for( int i = 0; i < TAMANHO; i++){
        for (int  j = 0; j < TAMANHO; j++){
            printf ("%d ", tabuleiro[i][j]);
        } 
        printf ("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
