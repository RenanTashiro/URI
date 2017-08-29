/*
Nome:      Dentista
ID:        2387
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   569 Bytes
Submissao: 15/06/17 15:32:57
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<pair<int,int>> interval(N); // end_time, init_time

    for(int i = 0; i < N; i++)
    {
        cin >> interval[i].second >> interval[i].first;
    }

    sort(interval.begin(), interval.end());

    int ans = 1, end_time = interval[0].first;

    for(int i = 1; i < N; i++)
    {
        if(end_time <= interval[i].second)
        {
            ans++;
            end_time = interval[i].first;
        }
    }

    cout << ans << endl;
}
