/******************************************************************************
Guilherme Wilias Lucca Sousa

Exercicios N3 :

Exercicio 73 :
A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Faça um algoritmo
para coletar dados sobre o salário e número de filhos de cada habitante e após as leituras, escrever:
a) Média de salário da população
b) Média do número de filhos
c) Maior salário dos habitantes
d) Percentual de pessoas com salário menor que R$ 150,00
Obs.: O final da leituras dos dados se dará com a entrada de um “salário negativo”.

*******************************************************************************/
#include <stdio.h>

int main (){
    
    //Variáveis : 
    int numFh, totHab = 0, totFh, numSalarioMenor = 0;
    float salario, medSalario, maiorSalario, somaSalario = 0;
    
    
    //Processamento da logica para resolução do que o exercicio está pedindo
    printf ("Escreva o salário do habitante desejado (Caso queira parar de inserir dados digite um numero negativo) : ");
    scanf ("%f", &salario); //Perguntando o salário do habitante 
    
    maiorSalario = salario; 
    
    while (salario >= 0){
        printf ("\nEscreva a quantidade de filhos do habitante : ");
        scanf ("%d", &numFh);
        
        totHab++;
        somaSalario += salario;
        totFh += numFh;
        
        if (salario > maiorSalario){
            maiorSalario = salario;
        }
        
        if (salario < 150.00){
            salario = numSalarioMenor;
        }
        
        printf ("Escreva o salário do habitante desejado (Caso queira parar de inserir dados digite um numero negativo) : ");
        scanf ("%f", &salario);
    }
    
    if (totHab > 0){
        medSalario = somaSalario / totHab;
    } else {
        medSalario = 0;
    }
    
    
    //Impressão dos resultados que o programa pediu : 
    printf ("\n\n---Resultados do programa : ---\n\n");
    
    printf ("\nMedia de salarios da população da cidade : %.2f", medSalario);
    printf ("\nMedia do número de filhos da população : %.2f", (float)totFh/totHab);
    printf ("\nMaior salario entre os habitantes da cidade : %.2f", maiorSalario);
    printf ("\nPercentual de pessoas com salários menor que 150 reais : %.1f", (float)numSalarioMenor / totHab * 100);
    
    return 0;
    
}
