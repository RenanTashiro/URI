/*
Nome:      Lista de Chamada
ID:        2381
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   307 Bytes
Submissao: 25/04/17 19:59:10
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    vector<string> call_list(N);

    for(int i = 0; i < N; i++)
    {
        cin >> call_list[i];
    }

    sort(call_list.begin(), call_list.end());

    cout << call_list[K-1] << endl;
}
