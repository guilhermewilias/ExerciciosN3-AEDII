/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3.
Exercicio 84 :
Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores). Após, ler dois
vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos
elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.
*******************************************************************************/
#include <stdio.h>

int main (){
    int numero; //numero = N. 
    printf ("Escreva o tamanho dos vetores : "); //Valor n para ditar o tamanho dos vetores.
    scanf ("%d", &numero); //Entrando com o tamanho dos vetores. 
    
    int x[numero], y[numero], soma[numero]; // Vetores. x = a, y  = b, soma = soma. 
    
    printf ("Digite os componentes do vetor X : "); //Leitura do vetor X (a)
    for (int contador = 0; contador < numero; contador++){ //Logica do vetor x (a)
        scanf ("%d", &x[contador]); //Entrando com os valores do vetor x (a)
    }
    
    printf ("Digite os componentes do vetor Y :"); //Leitura do vetor y (b)
    for (int contador = 0; contador < numero; contador++){ //logica do vetor y (b)
        scanf ("%d", &y[contador]); //Entrando com os valores do vetor y (b)
    }
    
    for (int contador = 0; contador < numero; contador++){
        soma[contador] = x[contador] + y[contador]; //dando significado para o vetor soma. Somando vetor x (a) e y (b).
    }
    
    printf ("A soma dos dois vetores será : "); 
    for (int contador = 0; contador < numero; contador++){
        printf ("%d", soma[contador]); //Impressão final do programa com a soma dos dois vetores (x e y).
    }
    return 0; //Fim. 
}