/*
Nome:      Caçadores de Mitos
ID:        2343
Resposta:  Accepted
Linguagem: C++
Tempo:     0.608s
Tamanho:   406 Bytes
Submissao: 26/04/17 18:33:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    set<pair<int,int>> bolt;
    int x, y;
    bool flag = false;

    while(N--)
    {
        cin >> x >> y;

        if(bolt.find(pair<int,int>(x, y)) != bolt.end())
        {
            flag = true;
        }

        bolt.insert(pair<int,int>(x, y));
    }

    cout << flag << endl;
}
