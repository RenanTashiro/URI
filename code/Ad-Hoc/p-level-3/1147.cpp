/*
Nome:      Fuga do Cavalo
ID:        1147
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,36 KB
Submissao: 10/10/15 19:37:10
*/
#include <bits/stdc++.h>

#define PLAYS 8
#define DIM 8

using namespace std;

int ctoi[] = {0,1,2,3,4,5,6,7};
int mov_i[] = {-2,-2,2,2,-1,1,-1,1}, mov_j[] = {-1,1,-1,1,-2,-2,2,2};

int checkValidMov( pair<int,int> pos, int matrix[DIM][DIM] )
{
    int valid = 0;

    for( int i = 0; i < 8; i++ ) {
        if( pos.first + mov_i[i] >= 0 && pos.first + mov_i[i] < 8 &&
            pos.second + mov_j[i] >= 0 && pos.second + mov_j[i] < 8  )
        {
            if( matrix[pos.first + mov_i[i]][pos.second + mov_j[i]] == 0 )
                valid++;
        }
    }
    return valid;
}

int main()
{
    ios::sync_with_stdio( false );

    int caso_de_teste = 1;
    string pos;

    while( cin >> pos && pos[0] != '0' )
    {
        pair<int,int> coord = { 8-( pos[0]-48 ),ctoi[(int)pos[1]-97]};
        string pawn;
        int matrix[DIM][DIM] = {{0}};

        for( int i = 0; i < PLAYS; i++ ) {
            cin >> pawn;
            int n = 8 - ( pawn[0]-48 ), m = ctoi[(int)pawn[1]-97];
            if( n + 1 < 8 ) {
                if( m - 1 >= 0 )
                    matrix[n+1][m-1] = 1;
                if( m + 1 < 8 )
                    matrix[n+1][m+1] = 1;
            }
        }


        cout << "Caso de Teste #" << caso_de_teste++ << ": " << checkValidMov( coord, matrix ) << " movimento(s).\n";
    }

    return 0;
}
