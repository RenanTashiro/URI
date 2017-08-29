/*
Nome:      Quadrado de Pares
ID:        1073
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   391 Bytes
Submissao: 07/01/15 14:30:55
*/
#include <iostream>
using namespace std;

int main()
{
    int N, aux;
    cin >> N;

    if(N % 2 == 0){
    for(int aux = 2; aux <= N; aux += 2){
        cout << aux << "^" << 2 << " = " << aux * aux << endl;
    }
    }
    else
    if(N % 2 == 1){
    for(int aux = 2; aux <= N; aux += 2){
        cout << aux << "^" << 2 << " = " << aux * aux << endl;
    }
    }
}
