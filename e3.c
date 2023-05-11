#include <stdio.h>

float inflacionarPreco(float preco) {
    if (preco < 100.0) {
        preco += preco * 0.1;  // Inflação de 10%
    } else {
        preco += preco * 0.2;  // Inflação de 20%
    }
    return preco;
}

int main() {
    float preco;
    
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);
    
    float precoInflacionado = inflacionarPreco(preco);
    
    printf("Preço inflacionado: R$ %.2f\n", precoInflacionado);
    
    return 0;
}
