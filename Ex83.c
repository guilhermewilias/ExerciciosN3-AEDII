/******************************************************************************
Guilherme Wilias Lucca Sousa
Exercicios N3 :

Exercicio 83 :
Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20
números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.
*******************************************************************************/
#include <stdio.h>

int main (){
    int vetor [20];
    
    printf ("Entre com 20 numeros inteiros : \n");
    for (int contador = 0; contador < 20; contador++){
        scanf ("%d", &vetor[contador]);
    }
    
    printf ("\nOs numeros que o usuário entrou na ordem inversa são : \n");
    for (int contador = 19; contador >= 0; contador--){
        printf ("\n%d", vetor[contador]);
    }
    
    return 0; 
}