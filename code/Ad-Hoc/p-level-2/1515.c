/*
Nome:      Hello Galaxy
ID:        1515
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   591 Bytes
Submissao: 12/06/15 09:52:18
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int N, year, light_years, first = 2113;
    char planet_name[51], planet_send_first[51];

    while( scanf( "%d", &N ) && N != 0 ){

        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%50s%d%d", planet_name, &year, &light_years );
            if( year - light_years < first ){
                strcpy( planet_send_first, planet_name );
                first = year - light_years;
            }
        }

        puts( planet_send_first );
        first = 2113;
    }

    return 0;
}
