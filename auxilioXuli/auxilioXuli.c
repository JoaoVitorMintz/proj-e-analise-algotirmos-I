#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool comparaMelhor(float Preco, int qtd, float desconto_A, int paga_B, int leva_B);

int main() {
    float P, X;
    int k, Y, Z;

    printf("Insira o preco do produto: ");
    scanf("%f", &P);

    printf("\nInsira a quantidade de produtos: ");
    scanf("%d", &k);

    printf("\nPara a loja A - Desconto percentual: ");
    scanf("%f", &X);

    printf("\nPara a loja B - Quantidade de produtos a serem pagos na promocao: ");
    scanf("%d", &Y);
    printf("\nPara a loja B - Quantidade de produtos que voce leva na promocao: ");
    scanf("%d", &Z);

    if(comparaMelhor(P, k, X, Y, Z) == true) {
        printf("\nLoja A tem menor custo que a loja B!");
    } else {
        printf("\nLoja B tem menor custo que a loja A!");
    }
}

bool comparaMelhor(float Preco, int qtd, float desconto_A, int paga_B, int leva_B) {
    // Calcula o custo na loja A:
    float total_A = qtd * Preco * (1 - desconto_A / 100);

    float total_B;

    // Calcula o custo na loja B:
    int grupo_completo = qtd / leva_B;
    int resto = qtd % leva_B;

    // Calcula caso a compra seja da quantidade necessária na B:
    int custo_1 = grupo_completo * paga_B * Preco;
    if (resto > 0) {
        custo_1 += resto * Preco; // pega os valores que estão fora da promoção e soma ao valor do custo
    }

    // Calcula caso a compra valha mais a pena comprar mais para melhorar a promoção:
    int custo_2 = (grupo_completo + 1) * paga_B * Preco;

    // Escolhe qual opção compensa mais, se é a de aumentar a quantidade de produto para mais desconto ou manter a quantidade de produto:
    if(custo_1 < custo_2) {
        total_B = custo_1;
    } else {
        total_B = custo_2;
    }

    // compara os valores:
    if(total_A < total_B) {
        return true;
    } else {
        return false;
    }
}