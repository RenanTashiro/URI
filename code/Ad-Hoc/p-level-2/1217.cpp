/*
Nome:      Getline Two - Frutas
ID:        1217
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   614 Bytes
Submissao: 03/06/15 13:51:22
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int n = 0, j = 0, i = 0, aux;
float total = 0;
char frutas[10000];
float totalValor = 0, totalKg = 0;

scanf ("%d", &n);

if (n <= 365) {

for (i = 1; i <= n; i++){

aux = 1;

scanf ("%f ", &total);

gets(frutas);

for (j = 0; j <= strlen(frutas); j++){

if (frutas[j] == ' '){
aux = aux + 1;
}	

}

printf ("day %d: %d kg\n", i, aux);

totalValor = totalValor + total;
totalKg = totalKg + aux;

}	

printf ("%.2f kg by day\n", totalKg/n);
printf ("R$ %.2f by day\n", totalValor/n);	
}

return 0;
}