/******************************************************************************
Guilherme Wilias Lucca Sousa 

Exercicios N3 :

Exercicio 72 : 
Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever:
- o maior preço lido
- a média aritmética dos preços dos produtos

*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variáveis do programa : 
    int cod, contador;
    float precoProd, maiorPreco = 0, somaPrecos = 0, mediaPrecos;
    
    
    //Logica de processamento do que o programa está pedindo :
    for (contador = 1; contador <= 15; contador++){
        printf ("\nEscreva o codigo do produto %d : ", contador);
        scanf ("%d", &cod);
        
        printf ("\nInsira o preço do produto %d : ", contador);
        scanf ("%f", &precoProd); //%f = var no float. 
        
        if (precoProd > maiorPreco){
            maiorPreco = precoProd;
        }
        
        somaPrecos += precoProd;
    }
    
    //Calculo de média e impressão dos resultados que foram pedidos no exercicio : 
    mediaPrecos = somaPrecos / 15;
    
    printf ("\n\nO maior preço de produtos lidos foi : %.2f", maiorPreco);
    printf ("\n\nA media de preços dos produtos lidos foi : %.1f", mediaPrecos);
    
    return 0;
    
}
