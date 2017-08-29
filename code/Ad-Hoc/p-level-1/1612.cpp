/*
Nome:      Formiguinha
ID:        1612
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   272 Bytes
Submissao: 31/01/15 21:11:32
*/
#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> N;

        if(N & 2 != 0)
            cout << N / 2 + 1 << endl;
        else
            cout << N / 2 << endl;
    }
}
