#include <stdio.h>

int tabuleiro[4][4];
int solucoes = 0;

int posicaoSegura(int linha, int coluna) {
    int i, j;
    
    for (i = 0; i < coluna; i++) { // Verifica a linha à esquerda
        if (tabuleiro[linha][i] == 1) {
            return 0;
        }
    }
    
    for (i = linha - 1, j = coluna - 1; i >= 0 && j >= 0; i--, j--) { // Verifica a diagonal superior esquerda
        if (tabuleiro[i][j] == 1) {
            return 0;
        }
    }
    
    for (i = linha + 1, j = coluna - 1; i < 4 && j >= 0; i++, j--) { // Verifica a diagonal inferior esquerda
        if (tabuleiro[i][j] == 1) {
            return 0;
        }
    }
    
    return 1;
}

void criarTabuleiro() { // Monta o tabuleiro
    printf("Solução %d:\n", ++solucoes);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("R ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int resolverRainhas(int coluna) {
    if (coluna >= 4) {
        criarTabuleiro();
        return 1;
    }
    
    int encontrouSolucao = 0;
    
    for (int linha = 0; linha < 4; linha++) { // Tenta colocar a rainha em cada linha da coluna
        if (posicaoSegura(linha, coluna)) {
            tabuleiro[linha][coluna] = 1; // Coloca a primeira rainha
            
            if (resolverRainhas(coluna + 1)) { // Coloca as rainhas restantes
                encontrouSolucao = 1;
            }
            
            tabuleiro[linha][coluna] = 0;
        }
    }
    
    return encontrouSolucao;
}

int main() {
    for (int i = 0; i < 4; i++) { // Monta o tabuleiro com zeros
        for (int j = 0; j < 4; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    printf("Soluções encontradas:\n\n");
    
    resolverRainhas(0); // Resolve o problema das rainhas
    
    printf("%d soluções foram encontradas", solucoes);
    
    return 0;
}