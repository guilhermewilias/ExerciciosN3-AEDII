/******************************************************************************
Guilherme Wilias Lucca Sousa
Exercicios N3 
Exercicio 82 :
Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após,
imprimir o vetor M.
*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variáveis e vetores.
    int A [10], M [10], X;
    
    //Processamento da lógica do programa.
    printf ("Entre com os 10 numeros da letra A : \n");
   for (int contador = 0; contador < 10; contador++){ //Leitura do primeiro vetor, vetor A [10].
       scanf ("%d", &A[contador]);
   }
   
   printf ("Entre com o valor de X : \n");
   scanf ("%d", &X); //Inserindo o número de X. 
   
   //Leitura e processamento do segundo vetor, vetor M [10]
   for (int contador = 0; contador < 10; contador++){
       M[contador] = A [contador] * X;
   }
   
   //Impressão e saída do vetor M [10]
   printf ("O numero do vetor de M é : ");
   for (int contador = 0; contador < 10; contador++){
       printf ("%d", M[contador]);
   }
   
   return 0;

}
