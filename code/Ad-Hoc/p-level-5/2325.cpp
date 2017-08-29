/*
Nome:      Repositórios
ID:        2325
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   585 Bytes
Submissao: 23/04/17 10:12:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C, N;

    cin >> C >> N;

    map<int,int> program;
    int id, version;

    for(int i = 0; i < C; i++)
    {
        cin >> id >> version;

        program[id] = version;
    }

    map<int,int> update;

    for(int i = 0; i < N; i++)
    {
        cin >> id >> version;

        if(program[id] < version)
        {
            update[id] = max(update[id], version);
        }
    }

    for(auto it : update)
    {
        cout << it.first << ' ' << it.second << endl;
    }
}
