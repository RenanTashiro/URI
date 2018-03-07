/*
Nome:      Jacutingas vs Jaburus
ID:        1784
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.064s
Tamanho:   1,07 KB
Submissao: 13/08/17 18:39:01
*/
#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return a * (b / __gcd(a, b));
}

/*
0 1 2 3
0 1 3 2
0 2 1 3
0 2 3 1
0 3 1 2
0 3 2 1
.......
3 2 1 0
*/
int main()
{
    int T;

    scanf("%d", &T);

    for(int TC = 1; TC <= T; TC++)
    {
        int N;

        scanf("%d", &N);

        int jacutinga[N], jaburus[N];

        for(int i = 0; i < N; i++)
            scanf("%d", &jacutinga[i]);

        for(int i = 0; i < N; i++)
            scanf("%d", &jaburus[i]);

        int match_index[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int ans = INT_MAX, lcm_table[N][N];

        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                lcm_table[i][j] = lcm(jacutinga[i], jaburus[j]);

        do {
            int mans = 0;

            for(int i = 0; i < N; i++)
                mans = max(mans, lcm_table[match_index[i]][i]);

            ans = min(ans, mans);
        } while(next_permutation(match_index, match_index + N));

        printf("Caso #%d: %d\n", TC, ans);
    }
}
