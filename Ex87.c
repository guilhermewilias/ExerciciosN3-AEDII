/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 87 :
O mesmo exercício anterior, mas depois de ordenar os elementos do vetor em ordem crescente,
deve ser lido mais um número qualquer e inserir esse novo número na posição correta, ou seja,
mantendo a ordem crescente do vetor.
*******************************************************************************/
#include <stdio.h>

void ordemVetor (int array[], int n){
    int contador, j, temp;
    for (contador = 0; contador < n - 1; j++){
        for (j = 0; j < n - contador - 1; j++){
            if (array[j] > array[j + 1]){
                temp = array [j];
                array[j] = array [j + 1];
                array [j + 1] = temp;
            }
        }
    }
}
void insertNumero (int array[], int n, int numero){
    int contador, j;
    for (contador = 0; contador < n; contador++){
        if (numero < array[contador]){
            for (j = n -1; j >= contador; j--){
                array[j+1] = array[j];
            }
            array[contador] = numero;
            break;
        }
    }
}
int main (){
    int vetor[11];
    int contador, numero;
    
    printf ("Escreva 10 numeros : \n");
    for (contador = 0; contador < 10; contador++){
        scanf ("%d", &vetor[contador]);
    }
    ordemVetor (vetor, 10);
    printf ("\n\nEscreva um numero adicional : ");
    scanf ("%d", &numero);
    
    insertNumero (vetor, 10, numero);
    
    printf ("\nVetor atualizado : \n");
    for (contador = 0; contador < 11; contador++){
        printf ("%d", vetor[contador]);
    }
    
    return 0;
}

