/*
Nome:      PãodeQuejoSweeper
ID:        2552
Resposta:  Accepted
Linguagem: C++
Tempo:     0.044s
Tamanho:   932 Bytes
Submissao: 09/05/17 17:12:53
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        int pao[N][M];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                cin >> pao[i][j];
            }
        }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                if(pao[i][j])
                {
                    cout << 9;
                }
                else
                {
                    int c = 0;

                    if(i + 1 < N && pao[i + 1][j]) c++;
                    if(i - 1 >= 0 && pao[i - 1][j]) c++;
                    if(j + 1 < M && pao[i][j + 1]) c++;
                    if(j - 1 >= 0 && pao[i][j - 1]) c++;

                    cout << c;
                }
            }

            cout << endl;
        }
    }
}
