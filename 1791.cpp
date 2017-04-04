/*
    Solução: Verficar se tem uma linha/coluna de uns;
             Se for em uma linha, tranpõe a matriz;
             Ordenas as linas usando a primeira como pivo;
             Verifica se são potencias de uma mesma base e compara com todas as linhas;
*/
#include <bits/stdc++.h>

#define DIM 8

using namespace std;

/** 1 mean Row / 2 mean Column / 0 mean Not Found **/
int findOnes( int matrix[DIM][DIM], int dim )
{
    int i, j;

    for( i = 0; i < dim; i++ ) {
        for( j = 0; j < dim; j++ ) {
            if( matrix[i][j] != 1 )
                break;
        }
        if( j == dim )
            return 1;
    }

    for( j = 0; j < dim; j++ ) {
        for( i = 0; i < dim; i++ ) {
            if( matrix[i][j] != 1 )
                break;
        }
        if( i == dim )
            return 2;
    }

    return 0;
}

/*int searchByRow( int matrix[DIM][DIM], int dim )
{
    int i, j;

    for( i = 0; i < dim; i++ ) {
        for( j = 0; i < dim; j++ ) {
            if( matrix[] )
        }
    }
}*/

int main()
{
    ios::sync_with_stdio( false );

    int C;

    cin >> C;

    while( C-- )
    {
        int N;
        int matrix[DIM][DIM];

        cin >> N;

        for( int i = 0; i < N; i++ )
            for( int j = 0; j < N; j++ )
                cin >> matrix[i][j];

        int ans = findOnes( matrix, N );

        if( ans > 0 ) {
            cout << "Potencia\n";
        }
        else {
            cout << "Nao Potencia\n";
        }
    }

    return 0;
}
