/*
Nome:      Estiagem
ID:        1023
Resposta:  Accepted
Linguagem: C
Tempo:     0.204s
Tamanho:   1,14 KB
Submissao: 29/07/15 19:39:11
*/
#include <stdio.h>
#include <math.h>

int main(){
    int i, j, n;
    int instancia = 1;
    int a, b;
    int total_agua;
    int total_pessoas;


    while(scanf("%d", &n) && n != 0){

        int vetor[205]={0};
        total_agua = 0;
        total_pessoas = 0;

        for(i=0;i<n;i++){

            scanf("%d%d", &a, &b);
            total_agua+=b;
            total_pessoas+= a;
            vetor[b/a]+= a;
        }
        if(instancia>1)
            printf("\n");
        printf("Cidade# %d:\n", instancia);

        for(i=0, j=0;i<205;i++){
            if(vetor[i]>0){
                if(j!=0)
                    printf(" ");
                printf("%d-%d", vetor[i], i);
                j++;
            }
        }

        double int_part;
        int frac_part;
        frac_part = (int) (modf ((double)total_agua/total_pessoas, &int_part) *100);

        if(frac_part < 10)
            printf("\nConsumo medio: %d.0%d m3.\n", (int)int_part, (int)frac_part);
        else
            printf("\nConsumo medio: %d.%d m3.\n", (int)int_part, (int)frac_part);

        instancia++;
    }

    return 0;
}
