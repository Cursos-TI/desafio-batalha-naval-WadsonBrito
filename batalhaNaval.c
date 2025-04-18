/*#include <stdio.h>

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
        return 0;
}*/

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    /*#include <stdio.h>

    #define TAM 10
    #define TAM_NAVIO 3
    
    // Função para verificar se um navio pode ser posicionado
    int pode_posicionar(int tabuleiro[TAM][TAM], int linha, int coluna, int direcao, int diagonal) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            int l = linha, c = coluna;
    
            if (diagonal == 1) {        // Diagonal ↘
                l += i;
                c += i;
            } else if (diagonal == 2) { // Diagonal ↙
                l += i;
                c -= i;
            } else if (direcao == 0) {  // Horizontal →
                c += i;
            } else if (direcao == 1) {  // Vertical ↓
                l += i;
            }
    
            if (l < 0 || l >= TAM || c < 0 || c >= TAM || tabuleiro[l][c] != 0)
                return 0; // Fora dos limites ou posição ocupada
        }
        return 1;
    }
    
    // Função para posicionar um navio no tabuleiro
    void posicionar_navio(int tabuleiro[TAM][TAM], int linha, int coluna, int direcao, int diagonal) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            int l = linha, c = coluna;
    
            if (diagonal == 1) {
                l += i;
                c += i;
            } else if (diagonal == 2) {
                l += i;
                c -= i;
            } else if (direcao == 0) {
                c += i;
            } else if (direcao == 1) {
                l += i;
            }
    
            tabuleiro[l][c] = 3;
        }
    }
    
    // Função principal
    int main() {
        int tabuleiro[TAM][TAM] = {0};
    
        // Tentativas de posicionamento dos 4 navios
        // Horizontal
        if (pode_posicionar(tabuleiro, 0, 0, 0, 0))
            posicionar_navio(tabuleiro, 0, 0, 0, 0);
    
        // Vertical
        if (pode_posicionar(tabuleiro, 2, 5, 1, 0))
            posicionar_navio(tabuleiro, 2, 5, 1, 0);
    
        // Diagonal ↘
        if (pode_posicionar(tabuleiro, 4, 1, 0, 1))
            posicionar_navio(tabuleiro, 4, 1, 0, 1);
    
        // Diagonal ↙
        if (pode_posicionar(tabuleiro, 6, 9, 0, 2))
            posicionar_navio(tabuleiro, 6, 9, 0, 2);
    
        // Exibir o tabuleiro
        printf("\n##### Tabuleiro Batalha Naval #####\n\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
        return 0;
    }*/


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

    #include <stdio.h>
  
    
    #define TAM_TABULEIRO 10
    #define TAM_HABILIDADE 5
    
    // Função para imprimir o tabuleiro com caracteres visuais
    void imprimirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
        for (int i = 0; i < TAM_TABULEIRO; i++) {
            for (int j = 0; j < TAM_TABULEIRO; j++) {
                if (tabuleiro[i][j] == 0) {
                    printf("0 "); // Água
                } else if (tabuleiro[i][j] == 3) {
                    printf("3 "); // Navio
                } else if (tabuleiro[i][j] == 5) {
                    printf("5 "); // Habilidade
                } else {
                    printf("! ");
                }
            }
            printf("\n");
        }
    }
    
    // Função para gerar uma matriz em forma de cone
    void gerarCone(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (j >= (TAM_HABILIDADE / 2 - i) && j <= (TAM_HABILIDADE / 2 + i)) {
                    habilidade[i][j] = 1;
                } else {
                    habilidade[i][j] = 0;
                }
            }
        }
    }
    
    // Função para gerar matriz em cruz
    void gerarCruz(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2) {
                    habilidade[i][j] = 1;
                } else {
                    habilidade[i][j] = 0;
                }
            }
        }
    }
    
    // Função para gerar matriz de octaedro (losango)
    void gerarOctaedro(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (abs(i - TAM_HABILIDADE / 2) + abs(j - TAM_HABILIDADE / 2) <= TAM_HABILIDADE / 2) {
                    habilidade[i][j] = 1;
                } else {
                    habilidade[i][j] = 0;
                }
            }
        }
    }
    
    // Função para aplicar a habilidade no tabuleiro
    void aplicarHabilidade(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int habilidade[TAM_HABILIDADE][TAM_HABILIDADE], int origem_linha, int origem_coluna) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                int linha = origem_linha - TAM_HABILIDADE / 2 + i;
                int coluna = origem_coluna - TAM_HABILIDADE / 2 + j;
    
                if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                    if (habilidade[i][j] == 1 && tabuleiro[linha][coluna] != 3) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    }
    
    int main() {
        int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
        memset(tabuleiro, 0, sizeof(tabuleiro)); // Iniciar com água
    
        // Adicionar alguns navios manualmente
        tabuleiro[2][2] = 3;
        tabuleiro[2][3] = 3;
        tabuleiro[3][2] = 3;
    
        // Matrizes de habilidades
        int cone[TAM_HABILIDADE][TAM_HABILIDADE];
        int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
        int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];
    
        // Gerar as formas
        gerarCone(cone);
        gerarCruz(cruz);
        gerarOctaedro(octaedro);
    
        // Aplicar habilidades
        aplicarHabilidade(tabuleiro, cone, 4, 4);
        aplicarHabilidade(tabuleiro, cruz, 6, 6);
        aplicarHabilidade(tabuleiro, octaedro, 2, 7);
    
        // Exibir o tabuleiro
        imprimirTabuleiro(tabuleiro);
    
        return 0;
    }