/*
Nome:      Rabiola
ID:        1876
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   915 Bytes
Submissao: 12/08/15 20:22:24
*/
#include <stdio.h>
#define MAXL 150

int main()
{
    char cipo[MAXL];

    while( scanf( "%100s", cipo ) != EOF )
    {
        int actual_length = 0, max_length = 0;
        unsigned i;
        _Bool flag = 0;

        for( i = 0; cipo[i] != '\0'; i++ )
        {
            if( cipo[i] == 'o' )
            {
                actual_length++;
            }
            else if( flag  )
            {
                if( actual_length / 2 > max_length)
                    max_length = actual_length / 2;
                actual_length = 0;
            }
            else if( !flag )
            {
                max_length = actual_length;
                actual_length = 0;
                flag = 1;
            }
        }

        if( actual_length > max_length )
            max_length = actual_length;

        printf( "%d\n", max_length );
    }


    return 0;
}
