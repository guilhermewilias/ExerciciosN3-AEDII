/******************************************************************************
Guilherme Wilias Lucca Sousa
Exercicios n3 :
Exercicio 88 : 
Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais um número
qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve gerar um novo
vetor sem esse número. (Considere que não haverão números repetidos no vetor).
*******************************************************************************/
#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    int vetor[TAMANHO_VETOR];
    int novoVetor[TAMANHO_VETOR - 1];
    int numero;
    int i, j;
    int encontrado = 0; // variável para verificar se o número foi encontrado no vetor

    // Lendo os 20 números do vetor
    printf("Digite os %d números do vetor:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor[i]);
    }

    // Lendo o número a ser verificado
    printf("Digite um número para verificar se está no vetor: ");
    scanf("%d", &numero);

    // Verificando se o número está no vetor
    for (i = 0, j = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == numero) {
            encontrado = 1; // número encontrado
        } else {
            novoVetor[j] = vetor[i];
            j++;
        }
    }

    // Gerando o novo vetor, caso o número tenha sido encontrado
    if (encontrado) {
        printf("O número %d foi encontrado no vetor. Novo vetor sem esse número:\n", numero);
        for (i = 0; i < TAMANHO_VETOR - 1; i++) {
            printf("%d ", novoVetor[i]);
        }
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}