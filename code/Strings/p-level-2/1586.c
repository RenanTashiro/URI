/*
Nome:      Cabo de Guerra
ID:        1586
Resposta:  Accepted
Linguagem: C
Tempo:     0.076s
Tamanho:   1,4 KB
Submissao: 28/06/17 18:19:40
*/
#include <stdio.h>

int main()
{
    int N;
    unsigned long long int teamA, teamB, x;
    _Bool empate = 0;

    while( scanf( "%d", &N ), N ){

        char names[N][11];
        int strength[100005] = {0};

        int i, j;

        for( i = 0; i < N; i++ ){

            scanf( "%10s", names[i] );

            for( j = 0; names[i][j] != '\0'; j++ ){
                strength[i] += names[i][j];
            }
        }

        int min = -1, max = N;
        int mid = ( min + max ) / 2;

        while( min <= max ){

            teamA = teamB = 0;
            x = 1;

            for( j = mid; j >= 0; j-- ){
                teamA +=  strength[j] * x;
                x++;
            }

            x = 1;

            for( j = mid + 1; j < N; j++){
                teamB += strength[j] * x;
                x++;
            }

            if( teamA < teamB ){
                min = mid + 1;
                mid = ( min + max ) / 2;
            }
            else if( teamA > teamB ){
                max = mid - 1;
                mid = ( min + max ) / 2;
            }
            else{
                empate = 1;
                break;
            }
        }

        if( empate ){
            printf( "%s\n", names[mid] );
        }
        else{
            puts( "Impossibilidade de empate." );
        }

        empate = 0;
    }

    return 0;
}
