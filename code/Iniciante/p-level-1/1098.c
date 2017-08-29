/*
Nome:      Sequencia IJ 4
ID:        1098
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   502 Bytes
Submissao: 20/05/15 10:57:41
*/
#include <stdio.h>

int main(){

    float i,j=1;

     for (i=0;i<2.1;i+=0.2){
        if (i==0 || i==1 || i>1.9) {
            printf("I=%1.0f J=%1.0f\n",i,j+=i);
            printf("I=%1.0f J=%1.0f\n",i,++j);
            printf("I=%1.0f J=%1.0f\n",i,++j);
            j=1;
        }
        else{
            printf("I=%.1f J=%.1f\n",i,j+=i);
            printf("I=%.1f J=%.1f\n",i,++j);
            printf("I=%.1f J=%.1f\n",i,++j);
            j=1;
        }
     }
return 0;
}