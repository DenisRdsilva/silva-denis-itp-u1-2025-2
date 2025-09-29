#include <stdio.h>

int main()
{
    int precoFornecedor1, precoFornecedor2, quantia;

    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%d", &precoFornecedor1);

    printf("Digite o preco do segundo fornecedor: ");
    scanf("%d", &precoFornecedor2);

    printf("Digite a quantia disponivel: ");
    scanf("%d", &quantia);

    int quantidadeFornecedor1 = 0;
    int maxQuantidadeFornecedor1 = 0;
    int maxQuantidadeFornecedor2 = 0;
    int quantiaRestante = quantia;

    while (quantidadeFornecedor1 <= 10) {
        int compraFornecedor1 = quantidadeFornecedor1*precoFornecedor1;

        for (int i = 0; i <= 10; i++) {
            int compraFornecedor2 = i*precoFornecedor2;
            int quantiaAtual = quantiaRestante;

            if (compraFornecedor1 + compraFornecedor2 <= quantia) {
                quantiaRestante = quantia - compraFornecedor1 - compraFornecedor2;
            }

            if (quantiaRestante < quantiaAtual) {
                maxQuantidadeFornecedor1 = quantidadeFornecedor1;
                maxQuantidadeFornecedor2 = i;
            }
        }
        quantidadeFornecedor1++;
    }

    printf("Resta menos comprando %d do primeiro e %d do segundo", maxQuantidadeFornecedor1, maxQuantidadeFornecedor2);

    return 0;
}