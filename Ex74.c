/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 74 :
Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 10.

*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variáveis : 
    int contador, j;
    
    //Lógica de processamento do programa. 
    for (contador = 1; contador <= 10; contador++){
        printf ("Aqui está a tabuada do %d : ", contador); //Impressão que vai sair de resposta
        
        for (j = 1; j <= 10; j++){
            printf ("%d x %d = %d\n", contador, j, contador * j); //Impressão que vai sair de resposta
        }
        printf ("\n");
    }
        
    
    return 0; 
}

