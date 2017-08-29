/*
Nome:      Idade em Dias
ID:        1020
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   229 Bytes
Submissao: 03/01/15 08:36:25
*/
#include <stdio.h>
int main(){
int age, anos, mes, dias;
scanf("%d",&age);
anos = age / 365;
age = age % 365;
mes = age / 30;
age = age % 30;
dias = age;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos, mes, dias);
}
