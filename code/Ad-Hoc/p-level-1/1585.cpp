/*
Nome:      Fazendo Pandorgas
ID:        1585
Resposta:  Accepted
Linguagem: C++
Tempo:     0.148s
Tamanho:   212 Bytes
Submissao: 04/02/15 09:46:08
*/
#include <iostream>
using namespace std;

int main()
{
    int N, x, y;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> x >> y;

        cout << x * y / 2 << " cm2" << endl;
    }
}
