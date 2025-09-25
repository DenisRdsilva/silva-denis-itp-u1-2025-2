#include <stdio.h>

int inserirLinhas() { // função que insere o número de linhas
    int numero;

    printf("Insira o número de linhas da matriz: ");
    scanf("%d", &numero);

    return numero;
}

int inserirColunas() { // função que insere o número de colunas
    int numero;

    printf("Insira o número de colunas da matriz: ");
    scanf("%d", &numero);

    return numero;
}

int main(){
    int linhas = inserirLinhas();
    int colunas = inserirColunas();

    int matriz[linhas][colunas];

    int criarMatriz(int linhas, int colunas) { // função que cria a matriz
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                printf("Insira o valor para a posição %d%d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    criarMatriz(linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d", matriz[i][j]);
            if (j < colunas - 1) {
                printf(" ");
            }
            if (j == colunas - 1) {
                printf("\n");
            }
        }
    }
    
    return 0;
}   