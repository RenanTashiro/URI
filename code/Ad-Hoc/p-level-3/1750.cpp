/*
Nome:      Ajude o Cupido
ID:        1750
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   575 Bytes
Submissao: 22/11/15 09:46:47
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, diff_01 = 0, diff_02 = 0;

    cin >> N;

    vector<int> arr(N);

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < N; i+= 2) {
        diff_01 += abs(arr[i]-arr[i+1]);
    }

    diff_02 += 24-abs(arr[0]-arr[N-1]);

    for(int i = 1; i < N-1; i += 2) {
        diff_02 += abs(arr[i]-arr[i+1]);
    }

    cout << min(diff_01, diff_02) << "\n";

    return 0;
}
