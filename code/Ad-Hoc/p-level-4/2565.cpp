/*
Nome:      Tubos de Ensaio
ID:        2565
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   645 Bytes
Submissao: 16/05/17 17:43:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        vector<double> tube(N);
        double avg = 0.0, ans = 0.0;

        for(int i = 0; i < N; i++)
        {
            cin >> tube[i];
        }

        sort(tube.begin(), tube.end());

        if(N % 2 == 0)
        {
            avg = (tube[N/2] + tube[N/2-1]) / 2;
        }
        else
        {
            avg = tube[N/2];
        }

        for(int i = 0; i < N; i++)
        {
            ans += fabs(avg - tube[i]);
        }

        cout << fixed << setprecision(2) << ans << endl;
    }
}
