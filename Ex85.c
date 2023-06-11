/******************************************************************************
Guilherme Wilias Lucca Sousa
Exercicios N3 :
Exercicio 85 :
Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano.
Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média anual
*******************************************************************************/


#include <stdio.h>
#define TOTAL_DIAS 5 //ler abaixo!!!!!
/*  IMPORTANTE LER ABAIXO : 
Claro que o correto no "#define TOTAL_DIAS" seria ter 365 ao invés de 5. 
Porém, se tivesse o 365 o usuário teria que colocar 365 temperaturas, o que claramente iria dificultar 
a usabilidade do programa. Então coloquei 5 para fazer o programa rodar.
*/

int main (){
    
   //Variaveis do programa :
   float temp [TOTAL_DIAS];
   float somaTemp = 0;
   float menorTemp, maiorTemp;
   float tempMediaAnual;
   int diasAbaixoMedia;
   
   
   //Lógica do programa / Leitura das temperaturas.
   for (int contador = 0; contador < TOTAL_DIAS; contador++){
       printf ("Escreva a media de temperatura do dia %d : ", contador + 1); //Leitura temp média do dia
       scanf ("%f", &temp[contador]);
       somaTemp += temp[contador];
       
       if (contador == 0){ //Iniciar menor e maior temp a partir da primeira temperatura lida pelo programa. 
           menorTemp = temp[contador];
           maiorTemp = temp[contador];
       }else {
           if (temp[contador] < maiorTemp){ //Atualizar valores de menor e maior temp (caso necessário)
               menorTemp= temp [contador];
           }
           if (temp[contador] > maiorTemp){
               maiorTemp = temp [contador];
           }
       }
   }
   
   tempMediaAnual = somaTemp / TOTAL_DIAS; //Calculo da média anual de temperatura.
   
   
   //Calculo de dias com a temperatura abaixo da média normal : 
   for (int contador = 0; contador < TOTAL_DIAS; contador++){
       if (temp[contador] < tempMediaAnual){
           diasAbaixoMedia++; 
       }
   }
   
   //Saidas e impressões do programa : 
   printf ("\n\nA menor temperatura do ano registrada foi : %.2f", menorTemp);
   printf ("\nA maior temperatura do ano registrada foi : %.2f", maiorTemp);
   printf ("\nMedia da temperatura anual : %.2f", tempMediaAnual);
   printf ("\nNumero de dias com a temperatura abaixo da media anual : %d", diasAbaixoMedia);
   
   return 0;
}


