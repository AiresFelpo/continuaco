#include <stdio.h>

void imprimirTabelaASCII() {
    printf("Tabela ASCII:\n");
    printf("Dec \t Hex \t Caractere\n");
    
    for (int codigo = 0; codigo <= 127; codigo++) {
        printf("%d \t %x \t %c\n", codigo, codigo, codigo);
    }
}

int main() {
    imprimirTabelaASCII();
    
    return 0;
}
