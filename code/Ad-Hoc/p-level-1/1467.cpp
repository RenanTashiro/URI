/*
Nome:      Zerinho ou Um
ID:        1467
Resposta:  Accepted
Linguagem: C++
Tempo:     0.076s
Tamanho:   327 Bytes
Submissao: 16/01/15 15:37:37
*/
#include <iostream>
using namespace std;

int main()
{
    int A, B , C;

    while(cin >> A >> B >> C){

    if(A == B && A != C)
    cout << 'C' << endl;
    else if(A == C && A != B)
    cout << 'B' << endl;
    else if(B == C && B != A)
    cout << 'A' << endl;
    else
    cout << "*" << endl;
    }
}
