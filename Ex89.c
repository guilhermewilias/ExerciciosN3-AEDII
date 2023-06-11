/******************************************************************************
Guilherme Wilias Lucca Sousa
Exercicios N3 :
Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a
quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.
*******************************************************************************/
#include <stdio.h>

#define TAMANHO_VETOR 15

int main() {
    int v1[TAMANHO_VETOR];
    int v2[TAMANHO_VETOR];
    int i, cont = 0;

    // Lendo os números do vetor V1
    printf("Digite os %d números do vetor V1:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &v1[i]);
    }

    // Lendo os números do vetor V2
    printf("Digite os %d números do vetor V2:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &v2[i]);
    }

    // Calculando a quantidade de números iguais nas mesmas posições
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (v1[i] == v2[i]) {
            cont++;
        }
    }

    // Exibindo o resultado
    printf("A quantidade de números iguais nas mesmas posições é: %d\n", cont);

    return 0;
}
