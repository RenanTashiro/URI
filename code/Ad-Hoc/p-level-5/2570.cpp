/*
Nome:      Californication
ID:        2570
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.500s
Tamanho:   1,22 KB
Submissao: 12/06/17 19:45:14
*/
#include <bits/stdc++.h>
using namespace std;

struct Memoria {
    int *line, *col;
};

int main()
{
    int N, M, K;

    scanf("%d%d%d", &N, &M, &K);

    vector<vector<Memoria>> cool(N, vector<Memoria>(M));
    int lines[1005], tlines[1005] = {};
    int col[1005], tcol[1005] = {};

    memset(lines, -1, sizeof lines);
    memset(col, -1, sizeof col);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cool[i][j].line = &lines[i];
            cool[i][j].col = &col[j];
        }
    }

    for(int i = 0; i < K; i++)
    {
        string op;
        int value;

        cin >> op >> value;

        if(op == "L")
        {
            lines[value-1] = i % 4;
            tlines[value-1] = i + 1;
        }
        else
        {
            col[value-1] = i % 4;
            tcol[value-1] = i + 1;
        }
    }

    int pts[4] = {};

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(tlines[i] > tcol[j])
                pts[*cool[i][j].line]++;
            else
                pts[*cool[i][j].col]++;
        }
    }

    printf("R%d H%d C%d P%d\n", pts[0], pts[1], pts[2], pts[3]);
}
