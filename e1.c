#include <stdio.h>

int exibirOpcoesPagamento() {
    int opcao;
    
    printf("Opções de pagamento:\n");
    printf("1) À vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$ 100,00)\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    
    return opcao;
}

void opcaoAVista(float totalGasto) {
    float valorDesconto = totalGasto * 0.1;
    float valorFinal = totalGasto - valorDesconto;
    printf("Opção escolhida: À vista com 10%% de desconto\n");
    printf("Valor total com desconto: R$ %.2f\n", valorFinal);
}

void opcaoDuasVezes(float totalGasto) {
    printf("Opção escolhida: Em duas vezes (preço da etiqueta)\n");
    printf("Valor total das prestações: 2x de R$ %.2f\n", totalGasto / 2);
}

void opcaoDeTresADezVezes(float totalGasto) {
    if (totalGasto > 100.0) {
        printf("Opção escolhida: De 3 até 10 vezes com 3%% de juros ao mês\n");
        printf("Digite o número de parcelas desejado (entre 3 e 10): ");
        int numParcelas;
        scanf("%d", &numParcelas);
        
        if (numParcelas >= 3 && numParcelas <= 10) {
            float valorParcela = (totalGasto * 1.03) / numParcelas;
            printf("Valor total das prestações: %dx de R$ %.2f\n", numParcelas, valorParcela);
        } else {
            printf("Número de parcelas inválido\n");
        }
    } else {
        printf("Essa opção de pagamento é válida apenas para compras acima de R$ 100,00\n");
    }
}

int main() {
    float totalGasto;
    
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);
    
    int opcao = exibirOpcoesPagamento();
    
    switch (opcao) {
        case 1:
            opcaoAVista(totalGasto);
            break;
        case 2:
            opcaoDuasVezes(totalGasto);
            break;
        case 3:
            opcaoDeTresADezVezes(totalGasto);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    
    return 0;
}
