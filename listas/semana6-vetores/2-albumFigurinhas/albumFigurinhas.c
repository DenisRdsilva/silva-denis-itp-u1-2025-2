#include <stdio.h>

int main() {
    int numeroFigurinhasAlbum, numeroFigurinhasMinhas;

    printf("Quantas figurinhas na coleção completa? ");
    scanf("%d", &numeroFigurinhasAlbum);

    printf("Quantas figurinhas você tem? ");
    scanf("%d", &numeroFigurinhasMinhas);

    if (numeroFigurinhasMinhas > numeroFigurinhasAlbum) {
        printf("Número de figurinhas inválido\n");
        return 0;
    }

    int figurinhas[numeroFigurinhasMinhas]; // Vetor com as figurinhas que tenho
    int figurinhasFaltando[numeroFigurinhasAlbum]; // Vetor com as figurinhas que faltam
    int qtdFaltando = 0; // contador de quantas faltam

    int existeNoVetor(int vetor[], int tamanho, int valor) {
        for (int i = 0; i < tamanho; i++) {
            if (vetor[i] == valor) {
                return 1; // achou
            }
        }
        return 0; // não achou
    }

    for (int i = 0; i < numeroFigurinhasMinhas; i++) { // Lendo as figurinhas que o usuário já tem
        printf("Qual o número da figurinha %d? ", i + 1);
        scanf("%d", &figurinhas[i]);
    }

    for (int i = 1; i <= numeroFigurinhasAlbum; i++) { // Verificando quais estão faltando
        if (!existeNoVetor(figurinhas, numeroFigurinhasMinhas, i)) {
            figurinhasFaltando[qtdFaltando] = i;
            qtdFaltando++;
        }
    }

    for (int i = 0; i < qtdFaltando; i++) {
        printf("%d ", figurinhasFaltando[i]);
    }
    
    return 0;
}
