#include <stdio.h>

int escolherOperacao() { // função que escolhe a operação a ser feita com as matrizes
    int operacao;

    do { // Só prossegue se o usuário escolher uma opção válida
        printf("Escolha a operação:\n1 - Soma\n2 - Subtração\n");
        // printf("Escolha a operação:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n");
        scanf("%d", &operacao);
    } while (operacao < 1 || operacao > 2);
    // } while (operacao < 1 || operacao > 3);

    return operacao;
}

int inserirLinhasOuColunas(int tipo) { // função que insere o número de linhas ou colunas
    int numero;

    if (tipo) {
        printf("Insira o número de colunas das matrizes: ");
    } else {
        printf("Insira o número de linhas da matrizes: ");
    }

    scanf("%d", &numero);

    return numero;
}

int main(){
    int operacao = escolherOperacao();
    int linhas = inserirLinhasOuColunas(0);
    int colunas = inserirLinhasOuColunas(1);

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int resultado[linhas][colunas];

    void criarMatriz(int linhas, int colunas, int matriz[linhas][colunas], int indice) { // função que cria a matriz
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                printf("Insira o elemento %d%d da matriz %d: ", i+1, j+1, indice);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]) { // função que imprime a matriz
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
    }

    criarMatriz(linhas, colunas, matriz1, 1);
    criarMatriz(linhas, colunas, matriz2, 2);

    void operacaoMatrizes(int linhas, int colunas) { 
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (operacao == 1) {
                    resultado[i][j] = matriz1[i][j] + matriz2[i][j]; // soma os elementos das matrizes
                } else if (operacao == 2) {
                    resultado[i][j] = matriz1[i][j] - matriz2[i][j]; // subtrai os elementos das matrizes
                // } else {
                //     if (i == j) { // multiplica os elementos das matrizes
                //         resultado[i][j] = (matriz1[i][j]*matriz2[i][j]) + (matriz1[i][j+1]*matriz2[i+1][j]);
                //     } else if (i < j) {
                //         resultado[i][j] = (matriz1[i][j]*matriz2[i][j+1]) + (matriz1[i][j+1]*matriz2[i+1][j+1]);
                //     } else if (i > j) {
                //         resultado[i][j] = (matriz1[i+1][j]*matriz2[i+1][j]) + (matriz1[i+1][j+1]*matriz2[i+1][j+1]);
                //     }
                }
            }
        }
        imprimirMatriz(linhas, colunas, resultado);
    }

    operacaoMatrizes(linhas, colunas);
    
    return 0;
}   