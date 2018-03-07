/*
Nome:      Iu-Di-Oh!
ID:        2542
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.188s
Tamanho:   950 Bytes
Submissao: 09/05/17 17:35:32
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int M, L;

        cin >> M >> L;

        vector<vector<int>> m_deck(M, vector<int>(N)), l_deck(L, vector<int>(N));

        for(int i = 0; i < M; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> m_deck[i][j];
            }
        }

        for(int i = 0; i < L; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> l_deck[i][j];
            }
        }

        int Cm, Cl, A;

        cin >> Cm >> Cl >> A;

        if(m_deck[Cm-1][A-1] > l_deck[Cl-1][A-1])
        {
            cout << "Marcos" << endl;
        }
        else if(m_deck[Cm-1][A-1] < l_deck[Cl-1][A-1])
        {
            cout << "Leonardo" << endl;
        }
        else
        {
            cout << "Empate" << endl;
        }
    }
}
