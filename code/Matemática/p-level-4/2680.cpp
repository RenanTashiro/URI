/*
Nome:      Folha de Pagamentos
ID:        2680
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.488s
Tamanho:   709 Bytes
Submissao: 19/09/17 08:59:36
*/
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

long long div_sum(int n)
{
    unordered_set<int> v;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(n / i == i)
                v.insert(i);
            else
            {
                v.insert(n/i);
                v.insert(i);
            }
        }
    }

    long long sum = 0;

    for (int i : v)
        sum += i;

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);

    int N;

    cin >> N;

    while(N--)
    {
        int M;

        cin >> M;

        cout << div_sum(M) << endl;
    }
}
