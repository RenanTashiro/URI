/*
Nome:      Estacionamento Linear
ID:        1523
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   1,21 KB
Submissao: 13/12/15 20:18:30
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, K;

    while(cin >> N >> K && N != 0)
    {
        stack<int> park;
        int C, S, act_time = 0;
        bool possible = true;

        for(int i = 0; i < N; i++) {
            cin >> C >> S;
            act_time = C;
            if(possible) {
                // Saida
                int prev = 0;
                if(!park.empty()) prev = park.top();
                while(!park.empty() && park.top() <= C) {
                    if(park.top() < prev) {
                        possible = false;
                    }
                    prev = park.top();
                    park.pop();
                }
                // Chegada
                if((int)park.size() < K) {
                    park.push(S);
                } else {
                    possible = false;
                }
            }
        }

        while(possible && !park.empty()) {
            if(park.top() < act_time) {
                possible = false;
            }
            act_time = park.top();
            park.pop();
        }

        cout << (possible ? "Sim" : "Nao") << "\n";
    }
}
