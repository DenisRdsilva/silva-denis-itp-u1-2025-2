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

    while (quantidadeFornecedor1 <= 10) {
        int compraFornecedor1 = quantidadeFornecedor1*precoFornecedor1;

        for (int i = 0; i <= 10; i++) {
            int compraFornecedor2 = i*precoFornecedor2;

            if (compraFornecedor1 + compraFornecedor2 <= quantia) {
                int quantiaRestante = quantia - compraFornecedor1 - compraFornecedor2;
                printf("Comprando %d do primeiro e %d do segundo resta: %d\n", quantidadeFornecedor1, i, quantiaRestante);
            }
        }
        quantidadeFornecedor1++;
    }

    return 0;
}