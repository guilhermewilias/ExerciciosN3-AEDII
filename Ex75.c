/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 75 :
Escreva um algoritmo que imprima as seguintes seqüências de números: (1, 1 2 3 4 5 6 7 8 9 10)
(2, 1 2 3 4 5 6 7 8 9 10) (3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, até
que o primeiro número (antes da vírgula), também chegue a 10.
*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variáveis : 
    int contador, j;
    
    //Processamento lógico do programa :
    for (contador = 1; contador <= 10; contador++){
        printf ("%d", contador); //Impressão do programa.
        
        for (j = 1; j <= 10; j++){
            printf ("%d", j); //Impressão do programa. 
        }
        printf ("\n");
    }
    
    return 0; 
}

