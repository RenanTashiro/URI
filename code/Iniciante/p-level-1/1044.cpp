/*
Nome:      Múltiplos
ID:        1044
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   396 Bytes
Submissao: 06/01/15 15:04:52
*/
#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    if(A > B && (A % B) == 0)
        cout << "Sao Multiplos" << endl;
    if(B > A && (B % A) == 0)
        cout << "Sao Multiplos" << endl;
    if(A > B && A % B != 0)
        cout << "Nao ao Multiplos" << endl;
    if(B > A && B % A != 0)
        cout << "Nao ao Multiplos" << endl;
}
