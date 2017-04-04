#include <stdio.h>

struct plano{
    int A, B, C, D;;
};

struct coordenadas{
    int X, Y, Z;

};

typedef struct plano Plano;
typedef struct coordenadas Coordenadas;

int main()
{
    int M, N;

    while( scanf( "%d%d", &M, &N ) != EOF ){

        Plano equacao[M];
        unsigned i;

        for( i = 0; i < M; i++ ){
            scanf( "%d%d%d%d", &equacao[i].A, &equacao[i].B, &equacao[i].C, &equacao[i].D );
        }

        Coordenadas pontos[N];

        for( i = 0; i < N; i++ ){
            scanf( "%d%d%d", &pontos[i].X, &pontos[i].Y, &pontos[i].Z );
        }


    }

    return 0;
}
