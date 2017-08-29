/*
Nome:      Colheita de Caju
ID:        2305
Resposta:  Accepted
Linguagem: C++
Tempo:     0.040s
Tamanho:   1,07 KB
Submissao: 27/10/16 10:25:39
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, C, M, N;

    scanf("%d%d%d%d", &L, &C, &M, &N);

    int farm[L][C];

    for(int i = 0; i < L; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &farm[i][j]);
            if(i == 0 && j > 0)
                farm[i][j] += farm[i][j-1];
            else if(j == 0 && i > 0)
                farm[i][j] += farm[i-1][j];
            else if(i > 0 && j > 0)
                farm[i][j] += farm[i-1][j] + farm[i][j-1] - farm[i-1][j-1];
        }
    }

    int ans = 0;

    for(int i = M-1; i < L; i++)
    {
        for(int j = N-1; j < C; j++)
        {
            int pos_ans = farm[i][j];

            if(i - M >= 0)
                pos_ans -= farm[i-M][j];
            if(j - N >= 0)
                pos_ans -= farm[i][j-N];
            if(i - M  >= 0 && j - N >= 0)
                pos_ans += farm[i-M][j-N];


            if(pos_ans > ans)
                ans = pos_ans;
            /// ans = max(ans, pos_ans);
        }
    }

    printf("%d\n", ans);
}

