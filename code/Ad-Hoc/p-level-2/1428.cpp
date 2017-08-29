/*
Nome:      Procurando Nessy
ID:        1428
Resposta:  Accepted
Linguagem: C++
Tempo:     0.044s
Tamanho:   368 Bytes
Submissao: 11/03/15 08:12:06
*/
#include <iostream>
using namespace std;

int main()
{
    int T, n, m, N, M;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> n >> m;

        n -= 2;
        m -= 2;

        N = n / 3;
        M = m / 3;

        if(n % 3 != 0)
            N++;
        if(m % 3 != 0)
            M++;

        cout << N * M << endl;
    }
}
