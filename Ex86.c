/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 86 :
Faça um algoritmo para ler 10 números e armazenar em um vetor. Após isto, o algoritmo deve
ordenar os números no vetor em ordem crescente. Escrever o vetor ordenado.
*******************************************************************************/
#include <stdio.h>

void ordemVetor (int array[], int numero){
    int contador, j, temp;
    for (contador =0; contador < numero; contador++){
        for (j = 0; j < numero - 1; j++){
            if (array[j] > array[j+1]){
                
                temp = array[j];
                array[j] = array [j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main (){
    int vetor [10], i, contador;
    
    printf ("Escreva 10 números : \n");
    for (contador = 0; contador < 10; contador++){
        scanf ("%d", &vetor[contador]).
    }
    ordemVetor (vetor, 10);
    
    printf("\n\nVetor ordenado : ");
    for (contador =0; contador <10; contador++){
        printf ("%d", vetor [i]);
    }
   return 0;
    
}