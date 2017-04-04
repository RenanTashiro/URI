#include <stdio.h>

int main()
{
    int H, P, F;

    while( scanf( "%d%d%d", &H, &P, &F ) && H != 0 )
    {
        int estoque[H][P];
        int i, j;

        for( i = 0; i < H; i++ )
            for( j = 0; j < P; j++ )
                scanf( "%d", &estoque[i][j] );

        int fila_de_caixas[F], ini = 0;

        for( i = 0; i < F; i++ )
            scanf( "%d", &fila_de_caixas[i] );

        for( i = P-1; i >= 0; i-- )
        {
            for( j = H-1; j >= 0; j-- )
            {
                if( estoque[j][i] == 0 && ini < F  )
                {
                    estoque[j][i] = fila_de_caixas[ini++];
                }
            }
        }


        for( i = 0; i < H; i++ )
        {
            for( j = 0; j < P; j++ )
            {
                printf( "%s%d", j == 0 ? "" : " ", estoque[i][j] );
            }
            puts( "" );
        }
    }

    return 0;
}
