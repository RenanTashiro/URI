/*
Nome:      Rouba Monte
ID:        2675
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.184s
Tamanho:   486 Bytes
Submissao: 19/09/17 13:42:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        stack<int> mont;
        long long sum = 0;

        for(int i = 0; i < N; i++)
        {
            int x;

            cin >> x;

            while(!mont.empty() && mont.top() > x)
            {
                sum += mont.top();
                mont.pop();
            }

            mont.push(x);
        }

        cout << sum << endl;
    }
}
