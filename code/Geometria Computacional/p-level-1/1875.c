/*
Nome:      Tribol
ID:        1875
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   1,39 KB
Submissao: 13/08/15 08:43:18
*/
#include <stdio.h>

void pts( const char t1, const char t2, int* arr )
{
    switch( t1 )
    {
        case 'R': arr[0] += t2 == 'G' ? 2 : 1; break;
        case 'G': arr[1] += t2 == 'B' ? 2 : 1; break;
        case 'B': arr[2] += t2 == 'R' ? 2 : 1; break;
    }
}

int main()
{
    int C;
    unsigned j;

    scanf( "%d", &C );

    for( j = 0; j < C; j++ )
    {
        int P;
        int team_pts[3] = {0}; ///0-R 1-G 2-B
        char T1, T2;

        scanf( "%d", &P );
        getchar();

        unsigned i;

        for( i = 0; i < P; i++ )
        {
            scanf( "%c %c", &T1, &T2 );
            getchar();
            pts( T1, T2, team_pts );
        }

        if( team_pts[0] == team_pts[1] && team_pts[1] == team_pts[2] )
            puts( "trempate" );
        else if( ( team_pts[0] == team_pts[1] && team_pts[0] > team_pts[2] ) ||
                 ( team_pts[1] == team_pts[2] && team_pts[1] > team_pts[0] ) ||
                 ( team_pts[0] == team_pts[2] && team_pts[0] > team_pts[1] )   )
            puts( "empate" );
        else
        {
            if( team_pts[0] > team_pts[1] && team_pts[0] > team_pts[2] )
                puts( "red" );
            else if( team_pts[1] > team_pts[0] && team_pts[1] > team_pts[2] )
                puts( "green" );
            else
                puts( "blue" );
        }
    }

    return 0;
}