/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 81 :
O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e a respectiva
posição dele nesse vetor.
*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variáveis : 
    int contador, j;
    int vet [10] = {1,2,3,4,5,6,7,8,9,10};
    
    //Processamento da lógica do algoritmo que o exercicio pede.
    for (contador = 1; contador <= 10; contador++){
        int menorNumero = vet [0];
        int posicaoNumero = 0;
        
        printf ("%d", contador);
        
        for (j = 0; j < 10; j++){
            if (vet[j] < menorNumero){
                menorNumero = vet [j];
                posicaoNumero = j;
            }
            printf ("%d", vet [j]);
        }
        printf ("O menor elemento foi : %d, na posição : %d\n", menorNumero, posicaoNumero); //Saída de impressão do programa.
    }
    
    return 0; 
    
}