#include <stdio.h>

int main() {
   //DECLARACAO DAS VARIAVEIS
   int n1, n2;
   //SOLICITA AO USUARIO QUE INFORME OS VALORES
   printf("Faz a soma de dois numeros:\n");
   printf("Digite os dois valores.\n");
   //OBTEM OS VALORES
   scanf("%i %i", &n1, &n2);
   //IMPRIME OS VALORES SOMADOS.
   printf("SOMA = %i\n", n1+n2);
   return 0;
}
