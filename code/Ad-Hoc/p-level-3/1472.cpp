/*
Nome:      Triângulos
ID:        1472
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.260s
Tamanho:   811 Bytes
Submissao: 18/05/17 19:08:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        set<int> pos;
        int sum = 0, ans = 0;

        for(int i = 0; i < N; i++)
        {
            int X;

            cin >> X;

            sum += X;

            pos.insert(sum);
        }

        if(sum % 3 == 0)
        {
            int step = sum / 3;

            for(set<int>::iterator it= pos.begin(); it != pos.end(); it++)
            {
                if(*it + step <= sum)
                {
                    if(pos.find(*it + step) != pos.end() && pos.find(*it + 2 * step) != pos.end())
                    {
                        ans++;
                    }
                }
            }
        }

        cout << ans << endl;
    }
}
