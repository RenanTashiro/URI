/*
Nome:      Divisores I
ID:        1157
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   189 Bytes
Submissao: 10/01/15 09:54:25
*/
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    for(int d = 1; d < n + 1; d++){
        if(n % d == 0)
        cout << d << endl;
    }
}
