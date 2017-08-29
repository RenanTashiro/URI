/*
Nome:      Salário
ID:        1008
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   259 Bytes
Submissao: 31/12/14 18:33:54
*/
#include <stdio.h>
int main(){
int number, hours;
float hours_worked, SALARY;
scanf("%d",&number);
scanf("%d",&hours);
scanf("%f",&hours_worked);
printf("NUMBER = %d\n",number);
SALARY = hours * hours_worked;
printf("SALARY = U$ %.2f\n",SALARY);
}
