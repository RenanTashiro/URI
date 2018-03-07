/*
Nome:      Máquina de Café
ID:        2670
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   253 Bytes
Submissao: 13/09/17 17:28:07
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int A1 = b + 2 * c;
    int A2 = a + c;
    int A3 = a * 2 + b;

    cout << 2 * min(A1, min(A2, A3)) << endl;

    return 0;
}
