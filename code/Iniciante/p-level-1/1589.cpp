/*
Nome:      Bob Conduite
ID:        1589
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   216 Bytes
Submissao: 13/01/15 11:07:49
*/
#include <iostream>
using namespace std;

int main()
{
    int T, R1, R2;
    cin >> T;

    for(int vezes = 0; vezes < T; vezes++){

        cin >> R1 >> R2;

        cout << R1 + R2 << endl;
    }
}
