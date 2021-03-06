/*
Nome:      Jaida e o Jogo Multiplicativo
ID:        1697
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.376s
Tamanho:   1,04 KB
Submissao: 18/11/15 12:47:52
*/
#include <bits/stdc++.h>

using namespace std;

vector<long long> sieve (int limit)
{
    vector<long long> prime;
    bool noPrime[2000000] = {false};

    prime.push_back(1);

    for (int i = 2; i < limit; i++) {
        if (!noPrime[i]) {
            prime.push_back(i);
            for (long long j = i + i; j < limit; j += i) {
                noPrime[j] = true;
            }
        }
    }

    return prime;
}

int main()
{
    ios::sync_with_stdio (false);

    vector<long long> prime = sieve (1500000);

    int T;

    cin >> T;

    while (T--) {
        int N, n;

        cin >> N;

        vector<int> number;

        for (int i = 0; i < N; i++) {
            cin >> n;
            number.push_back(n);
        }

        sort(number.begin(), number.end());

        int i = 0;

        while (1) {
            if (!binary_search(number.begin(), number.end(), prime[i])) {
                break;
            } i++;
        }

        cout << prime[i]-1 << "\n";
    }

    return 0;
}
