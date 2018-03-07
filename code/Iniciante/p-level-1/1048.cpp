/*
Nome:      Aumento de Salário
ID:        1048
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,16 KB
Submissao: 16/06/15 09:46:06
*/
#include <stdio.h>
  
int main() {
  
   double sal, novoSal, reajuste;
   int a=37,pct;
    scanf("%lf",&sal);
    if ((sal>=0)&&(sal<=400)){
        printf("Novo salario: %.2lf\n", novoSal=sal*1.15);
        printf ("Reajuste ganho: %.2lf\n", reajuste=sal*0.15);
        printf ("Em percentual: %d %c\n",pct=15, a);}
    if((sal>400.00)&&(sal<=800)){
        printf("Novo salario: %.2lf\n", novoSal=sal*1.12);
        printf ("Reajuste ganho: %.2lf\n", reajuste=sal*0.12);
        printf ("Em percentual: %d %c\n",pct=12, a);}
    if((sal>800)&&(sal<=1200)){
        printf("Novo salario: %.2lf\n", novoSal=sal*1.1);
        printf ("Reajuste ganho: %.2lf\n", reajuste=sal*0.1);
        printf ("Em percentual: %d %c\n",pct=10, a);}
    if((sal>1200)&&(sal<=2000)){
        printf("Novo salario: %.2lf\n", novoSal=sal*1.07);
        printf ("Reajuste ganho: %.2lf\n", reajuste=sal*0.07);
        printf ("Em percentual: %d %c\n",pct=7,a);}
    if(sal>2000){
        printf("Novo salario: %.2lf\n", novoSal=sal*1.04);
        printf ("Reajuste ganho: %.2lf\n", reajuste=sal*0.04);
        printf ("Em percentual: %d %c\n",pct=4,a);}
         
  
    return 0;
}