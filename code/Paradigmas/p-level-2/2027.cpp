/*
Nome:      Aposta com Noel
ID:        2027
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   558 Bytes
Submissao: 26/02/16 10:47:19
*/
#include <bits/stdc++.h>

using namespace std;

int gdc(int a, int b)
{
    int c = -1;

    while(c != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main()
{
    ios::sync_with_stdio(false);

    int Rolien, Noel;
    list<int> memo;

    while(cin >> Rolien >> Noel)
    {
        int ans = gdc(Rolien, Noel);

        memo.push_front(ans);

        cout << (ans > 5 ? "Noel" : "Gnomos") << "\n";
    }

    for(auto& m : memo) {
        cout << m << ' ';
    }

    cout << endl;
}