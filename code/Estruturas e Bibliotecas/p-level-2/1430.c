/*
Nome:      Composição de Jingles
ID:        1430
Resposta:  Accepted
Linguagem: C
Tempo:     0.016s
Tamanho:   1,15 KB
Submissao: 12/06/15 14:13:58
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char composition[201];
    int right_measures = 0;
    double time_of_measure = 0.0;

    while( scanf( "%200s", composition ) && composition[0] != '*' ){

        size_t i;

        for( i = 1; i < strlen( composition ); i++ ){
            if( composition[i] == '/'  ){
                if( time_of_measure == 1.00 ) right_measures++;
                time_of_measure = 0.0;
            }
            else{
                switch( composition[i] ){
                    case 'W': time_of_measure += 1.0; break;
                    case 'H': time_of_measure += 0.5; break;
                    case 'Q': time_of_measure += 0.25; break;
                    case 'E': time_of_measure += 0.125; break;
                    case 'S': time_of_measure += 0.0625; break;
                    case 'T': time_of_measure += 0.03125; break;
                    case 'X': time_of_measure += 0.015625; break;
                    default: break;
                }
            }
        }

        printf( "%d\n", right_measures );
        right_measures = time_of_measure = 0;
    }

    return 0;
}
