/*
Nome:      Somando Inteiros Consecutivos
ID:        1149
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   273 Bytes
Submissao: 09/01/15 22:11:30
*/
#include <iostream>
using namespace std;

int main (){

    int A, N, i = 0, total = 0;
    cin >> A >> N;

    while(N == 0 || N < 0){
    cin >> N;
    }
    while(i < N){
        total += A;
        A++;
        i++;
    }
    cout << total << endl;
}
