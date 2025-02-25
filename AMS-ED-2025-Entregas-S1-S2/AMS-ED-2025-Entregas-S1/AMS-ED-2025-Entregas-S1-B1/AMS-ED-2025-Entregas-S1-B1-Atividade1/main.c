#include <stdio.h>

int calcularDesconto(int *ptrPreco, int *ptrDesconto) { 
    return (*ptrPreco) - (*ptrDesconto);
}

 void main() {
    int preco, desconto, pFinal, decisao;
    
    printf("Preço do produto");
    scanf("%i", &preco);
    
            printf("\n");
            printf("Insira o desconto, em reais: ");
            scanf("%d", &desconto); 
            
            pFinal = calcularDesconto(&preco, &desconto); 
            
            printf("\n");
            printf("O seu produto,de preço %i e desconto de %i reais ficou com o preço final de: %i\n", preco, desconto, pFinal);
       
}