/*
Nome:      Evento
ID:        2172
Resposta:  Accepted
Linguagem: C++
Tempo:     0.092s
Tamanho:   202 Bytes
Submissao: 15/08/16 21:27:01
*/
#include <iostream>
 
using namespace std;
 
int main() 
{
    long long unsigned X, M;
    
    while(cin >> X >> M && X != 0)
    {
        cout << X * M << endl;
    }
 
    return 0;
}