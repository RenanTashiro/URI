/*
Nome:      Jogo do Limite
ID:        1895
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   537 Bytes
Submissao: 24/08/15 19:32:24
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int N, T, L;
    unsigned i;

    scanf( "%d%d%d", &N, &T, &L );

    int alice_pts = 0, bob_pts = 0;

    for( i = 1; i < N; i++ )
    {
        int S;

        scanf( "%d", &S );

        if( fabs( T - S ) <= L )
        {
            if( i & 1 )
                alice_pts += fabs( T - S );
            else
                bob_pts += fabs( T - S );
            T = S;
        }
    }

    printf( "%d %d\n", alice_pts, bob_pts );

    return 0;
}
