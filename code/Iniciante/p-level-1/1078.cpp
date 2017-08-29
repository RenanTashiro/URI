/*
Nome:      Tabuada
ID:        1078
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   225 Bytes
Submissao: 07/01/15 16:35:37
*/
#include <iostream>
using namespace std;

int main(){

    int n, total;
    cin >> n;

    for(int i = 1; i <= 10; i++){
        total = n * i;
        cout << i << " x " << n << " = " << total << endl;
    }
}
