/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 71 :
Faça um algoritmo para ler uma quantidade e a seguir ler esta quantidade de números. Depois de
ler todos os números o algoritmo deve apresentar na tela o maior dos números lidos e a média dos
números lidos.

*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variaveis : 
    int qnt, contador;
    float num, numMaior = 0, soma = 0, numMedia;
    
    
    //Fazendo o usuário digitar a quantidade de numeros desejada para o programa ler : 
    printf ("Entre com a quantidade de numeros que você quer que o programa leia : ");
    scanf ("%d", &qnt);
    
    //Processamento da lógica de funcionamento do programa : 
    for (contador = 1; contador <= qnt; contador++){
        printf ("Escreva o numero %d : ", contador);
        scanf ("%f", &num);
        
        soma += num;
        
        if (num > numMaior){
            numMaior = num;
        }
    }
    
    //Calculando média e impressão dos dados pedidos no exercicio.
    numMedia = soma / qnt;
    
    printf ("\n\nO maior numero lido pelo programa foi : %.2f", numMaior);
    printf ("\n\nA media dos numeros lidos pelo programa foi : %.1f", numMedia);
    
    return 0;
}


