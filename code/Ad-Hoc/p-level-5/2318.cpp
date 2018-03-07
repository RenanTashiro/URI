/*
Nome:      Quadrado Mágico
ID:        2318
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   4,38 KB
Submissao: 22/04/17 11:07:12
*/
#include <bits/stdc++.h>
using namespace std;

int nzero(int a, int b, int c)
{
    int n = 0;

    if(!a) n++;
    if(!b) n++;
    if(!c) n++;

    return n;
}

int main()
{
    int square[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> square[i][j];
        }
    }

    int sum = 0;

    if(square[0][0] && square[0][1] && square[0][2]) {
        sum = square[0][0] + square[0][1] + square[0][2];
    }
    else if(square[1][0] && square[1][1] && square[1][2]) {
        sum = square[1][0] + square[1][1] + square[1][2];
    }
    else if(square[2][0] && square[2][1] && square[2][2]) {
        sum = square[2][0] + square[2][1] + square[2][2];
    }
    else if(square[0][0] && square[1][0] && square[2][0]) {
        sum = square[0][0] + square[1][0] + square[2][0];
    }
    else if(square[0][1] && square[1][1] && square[2][1]) {
        sum = square[0][1] + square[1][1] + square[2][1];
    }
    else if(square[0][2] && square[1][2] && square[2][2]) {
        sum = square[0][2] + square[1][2] + square[2][2];
    }
    else if(square[0][0] && square[1][1] && square[2][2]) {
        sum = square[0][0] + square[1][1] + square[2][2];
    }
    else if( square[0][2] && square[1][1] && square[2][0]) {
        sum =  square[0][2] + square[1][1] + square[2][0];
    }

    if(sum == 0)
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(square[i][j] == 0)
                {
                    if(nzero(square[i][0], square[i][1], square[i][2]) == 1) {
                        square[i][j] = sum - (square[i][0] + square[i][1] + square[i][2]);
                    }
                    else if(nzero(square[0][j], square[1][j], square[2][j]) == 1) {
                        square[i][j] = sum - (square[0][j] + square[1][j] + square[2][j]);
                    }
                    else if(nzero(square[i][j], square[(i-1 == -1) ? 2 : i-1][(j-1 == -1) ? 2 : j-1], square[(i+1)%3][(j+1)%3])== 1) {
                        square[i][j] = sum - (square[i][j] + square[(i-1 == -1) ? 2 : i-1][(j-1 == -1) ? 2 : j-1] + square[(i+1)%3][(j+1)%3]);
                    }
                    else if(nzero(square[i][j], square[(i+1)%3][(j-1 == -1) ? 2 : j-1], square[(i-1 == -1) ? 2 : i-1][(j+1)%3]) == 1) {
                        square[i][j] = sum - (square[i][j] + square[(i+1)%3][(j-1 == -1) ? 2 : j-1] + square[(i-1 == -1) ? 2 : i-1][(j+1)%3]);
                    }
                }
            }
        }

        if(square[0][0] < 0)
        {
            while(square[0][0] + square[1][1] + square[2][2] != square[0][2] + square[1][1] + square[2][0])
            {
                square[0][0]++;
                square[1][1]++;
                square[2][2]++;
            }
        }
        else
        {
           while(square[0][0] + square[1][1] + square[2][2] != square[0][2] + square[1][1] + square[2][0])
            {
                square[0][2]++;
                square[1][1]++;
                square[2][0]++;
            }
        }

    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j > 0) {
                cout << ' ';
            }

            if(square[i][j] == 0)
            {
                if(nzero(square[i][0], square[i][1], square[i][2]) == 1) {
                    cout << sum - (square[i][0] + square[i][1] + square[i][2]);
                }
                else if(nzero(square[0][j], square[1][j], square[2][j]) == 1) {
                    cout << sum - (square[0][j] + square[1][j] + square[2][j]);
                }
                else if(nzero(square[i][j], square[(i-1 == -1) ? 2 : i-1][(j-1 == -1) ? 2 : j-1], square[(i+1)%3][(j+1)%3])== 1) {
                    cout << sum - (square[i][j] + square[(i-1 == -1) ? 2 : i-1][(j-1 == -1) ? 2 : j-1] + square[(i+1)%3][(j+1)%3]);
                }
                else if(nzero(square[i][j], square[(i+1)%3][(j-1 == -1) ? 2 : j-1], square[(i-1 == -1) ? 2 : i-1][(j+1)%3]) == 1) {
                    cout << sum - (square[i][j] + square[(i+1)%3][(j-1 == -1) ? 2 : j-1] + square[(i-1 == -1) ? 2 : i-1][(j+1)%3]);
                }
            }
            else
            {
                cout << square[i][j];
            }
        }

        cout << endl;
    }
}
