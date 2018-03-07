/*
Nome:      Bolacha
ID:        2515
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.272s
Tamanho:   613 Bytes
Submissao: 16/09/17 00:23:29
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int sum = 0, arr[N];

        for(int i = 0; i < N; i++)
            cin >> arr[i], sum += arr[i];

        int marc = 0, leo = 0, part_sum = 0;

        for(int i = 0; i < N-1; i++)
        {
            part_sum += arr[i];

            if(min(sum - part_sum, part_sum) > marc)
            {
                marc = min(sum - part_sum, part_sum);
                leo = max(sum - part_sum, part_sum);
            }
        }

        cout << marc << ' ' << leo << endl;
    }
}
