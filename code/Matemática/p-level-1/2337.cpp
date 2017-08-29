/*
Nome:      Pro Habilidade
ID:        2337
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   623 Bytes
Submissao: 21/04/17 10:26:29
*/
#include <bits/stdc++.h>
using namespace std;

long long mdc(long long a, long long b)
{
    if(a % b == 0)
        return b;
    return mdc(b, a % b);
}

int main()
{
    int N;

    while(cin >> N)
    {
        long long divisor[2] = {1, 1}, dividend = 1;

        for(int i = 0; i < N; i++)
        {
            long long tmp = divisor[1];

            divisor[1] = divisor[1] + divisor[0];
            divisor[0] = tmp;
            dividend *= 2;
        }

        long long MDC = mdc(divisor[1], dividend);

        cout << divisor[1] / MDC << '/' << dividend / MDC << endl;
    }
}
