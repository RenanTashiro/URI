#include <bits/stdc++.h>

#define DIM 8
#define PIECE 2

using namespace std;

int ctoi[] = { 0, 1, 2, 3, 4, 5, 6, 7 };

void setPawn( int board[DIM][DIM], pair<int,int> loc )
{
    if( loc.first-1 >= 0 ) {
        if( loc.second-1 >= 0 && board[loc.first-1][loc.second-1] != PIECE )
            board[loc.first-1][loc.second-1] = 1;
        else if( loc.second-1 >= 0 && board[loc.first-1][loc.second-1] == PIECE ) {
            board[loc.first-1][loc.second-1] = 3;
        }
        if( loc.second+1 < DIM && board[loc.first-1][loc.second+1] != PIECE )
            board[loc.first-1][loc.second+1] = 1;
        else if( loc.second+1 < DIM && board[loc.first-1][loc.second+1] == PIECE ) {
            board[loc.first-1][loc.second+1] = 3;
        }
    }
}

void setTower( int board[DIM][DIM], pair<int,int> loc )
{
    for( int i = loc.first+1; i < DIM; i++ ) {
        if( board[i][loc.second] == PIECE ) {
            board[i][loc.second] = 3;
            break;
        }
        board[i][loc.second] = 1;
    }
    for( int i = loc.first-1; i >= 0; i-- ) {
        if( board[i][loc.second] == PIECE ) {
            board[i][loc.second] = 3;
            break;
        }
        board[i][loc.second] = 1;
    }
    for( int j = loc.second+1; j < DIM; j++ ) {
        if( board[loc.first][j] == PIECE ) {
            board[loc.first][j] = 3;
            break;
        }
        board[loc.first][j] = 1;
    }
    for( int j = loc.second-1; j >= 0; j-- ) {
        if( board[loc.first][j] == PIECE ) {
            board[loc.first][j] = 3;
            break;
        }
        board[loc.first][j] = 1;
    }
}

void setBishop( int board[DIM][DIM], pair<int,int> loc )
{
    for( int i = loc.first+1, j = loc.second+1; i < DIM && j < DIM; i++, j++ ) {
        if( board[i][j] == PIECE ) {
            board[i][j] = 3;
            break;
        }
        board[i][j] = 1;
    }
    for( int i = loc.first+1, j = loc.second-1; i < DIM && j >=0; i++, j-- ) {
        if( board[i][j] == PIECE ) {
            board[i][j] = 3;
            break;
        }
        board[i][j] = 1;
    }
    for( int i = loc.first-1, j = loc.second+1; i >=0 && j < DIM; i--, j++ ) {
        if( board[i][j] == PIECE ) {
            board[i][j] = 3;
            break;
        }
        board[i][j] = 1;
    }
    for( int i = loc.first-1, j = loc.second-1; i >=0 && j >= 0; i--, j-- ) {
        if( board[i][j] == PIECE ) {
            board[i][j] = 3;
            break;
        }
        board[i][j] = 1;
    }
}

void setQueen( int board[DIM][DIM], pair<int,int> loc )
{
    setTower( board, loc );
    setBishop( board, loc );
}

void setKing( int board[DIM][DIM], pair<int,int> loc )
{
    int change_i[] = { 1, 1, 0, -1 ,-1 ,-1, 0, 1 };
    int change_j[] = { 0, 1, 1, 1, 0, -1, -1, -1 };

    for( int i = 0; i < DIM; i++ ) {
        if(  loc.first+change_i[i] >= 0 &&  loc.first+change_i[i] < DIM && loc.second+change_j[i] >= 0 && loc.second+change_j[i] < DIM ) {
            if( board[ loc.first+change_i[i] ][ loc.second+change_j[i] ] == PIECE ) {
                board[ loc.first+change_i[i] ][ loc.second+change_j[i] ] = 3;
                break;
            }
            board[ loc.first+change_i[i] ][ loc.second+change_j[i] ] = 1;
        }
    }
}

void callFoo( int board[DIM][DIM], string inst )
{
    pair<int,int> loc = {(int)inst[2]-49,ctoi[(int)inst[1]-97]};

    switch( inst[0] ) {
        case 'P': setPawn( board, loc ); break;
        case 'T': setTower( board, loc ); break;
        case 'B': setBishop( board, loc ); break;
        case 'R': setQueen( board, loc ); break;
        case 'W': setKing( board, loc ); break;
    }
}

bool checkMate( int board[DIM][DIM], pair<int,int> loc )
{
    int change_i[] = { 1, 1, 0, -1 ,-1 ,-1, 0, 1 };
    int change_j[] = { 0, 1, 1, 1, 0, -1, -1, -1 };

    if( board[loc.first][loc.second] == 0 )
        return false;

    for( int i = 0; i < DIM; i++ ) {
        if( loc.first+change_i[i] >= 0 && loc.first+change_i[i] < DIM && loc.second+change_j[i] >= 0 && loc.second+change_j[i] < DIM
           && board[ loc.first+change_i[i] ][ loc.second+change_j[i] ] != 1 && board[ loc.first+change_i[i] ][ loc.second+change_j[i] ] != 3 )
            return false;
    }
    return true;
}

int main()
{
    int N;

    while( cin >> N )
    {
        string pieces[N], whiteKing;
        int board[DIM][DIM] = {{0}};

        for( int i = 0; i < N; i++ ) {
            cin >> pieces[i];
            board[(int)pieces[i][2]-49][ctoi[(int)pieces[i][1]-97]] = PIECE;
        }

        for( int i = 0; i < N; i++ ) {
            callFoo( board, pieces[i] );
        }

        cin >> whiteKing;

        if( !checkMate( board, { (int)whiteKing[2]-49,(int)whiteKing[1]-97 } ) )
            cout << "NAO\n";
        else
            cout << "SIM\n";

        /*for( int i = 0; i < DIM; i++ ) {
            for( int j = 0; j < DIM; j++ )
                cout << board[i][j];
            cout << "\n";
        }*/
    }

    return 0;
}

