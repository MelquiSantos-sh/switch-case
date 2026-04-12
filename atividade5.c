#include <stdio.h>

int main()
{
    float valor_produto, valor_final, diferenca, parcela;
    int opcao, parcelas = 1;

    printf("Digite o valor total da compra:\n");
    scanf("%f", &valor_produto);

    printf("Escolha a forma de pagamento:\n");
    printf("1 - A vista (15%% de desconto)\n");
    printf("2 - Cheque 30 dias (10%%  de desconto)\n");
    printf("3 - 3x (5%% de desconto)\n");
    printf("4 - 6x (sem desconto)\n");
    printf("5 - 12x (8%% de juros )\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        valor_final = valor_produto * 0.85;
        break;
    case 2:
        valor_final = valor_produto * 0.90;
        break;
    case 3:
        valor_final = valor_produto * 0.95;
        parcelas = 3;
        break;
    case 4:
        valor_final = valor_produto;
        parcelas = 6;
        break;
    case 5:
        valor_final = valor_produto * 1.08;
        parcelas = 12;
        break;

    default:
        printf("Opcao invalida!\n");
        return 0;
    }
    diferenca = valor_final - valor_produto;

    printf("\nValor original: R$ %.2f\n", valor_produto);
    printf("\nValor final: R$ %.2f\n", valor_final);

    if (diferenca > 0)
    {
        printf("Desconto de: R$ %.2f\n", diferenca);
    }
    else if (diferenca < 0)
    {
        printf("Juros de: R$ %.2f\n", diferenca * -1);
    }
    else
    {
        printf("Sem desconto ou juros.\n");
    }

    if (parcelas > 1)
    {
        parcela = valor_final / parcelas;
        printf("Parcelado em %dx de R$ %.2f\n", parcelas, parcela);
    }

    return 0;
}