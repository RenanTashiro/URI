/*
Nome:      Árvore de Natal
ID:        2026
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,04 KB
Submissao: 26/02/16 10:46:48
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<pair<int,int>> vii;

int knapSack(int W, vii& sack, const int N)
{
    int K[N+1][W+1];

    for(int i = 0; i <= N; i++) {
        for(int w = 0; w <= W; w++) {
            if(i == 0 || w == 0) {
                K[i][w] = 0;
            }
            else if(sack[i-1].first <= w) {
                K[i][w] = max(sack[i-1].second + K[i-1][w-sack[i-1].first], K[i-1][w]);
            }
            else {
                K[i][w] = K[i-1][w];
            }
        }
    }

    return K[N][W];
}

int main()
{
    ios::sync_with_stdio(false);

    int G;

    cin >> G;

    for(int g = 1; g <= G; g++)
    {
        int P, W;
        vii sack; // {Weight, Value}

        cin >> P >> W;

        for(int i = 0; i < P; i++) {
            int E, PC;
            cin >> E >> PC;
            sack.push_back({PC,E});
        }

        cout << "Galho " << g << ":\n";
        cout << "Numero total de enfeites: " << knapSack(W, sack, P) << "\n\n";
    }

}
