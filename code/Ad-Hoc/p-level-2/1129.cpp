/*
Nome:      Leitura Ótica
ID:        1129
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   814 Bytes
Submissao: 03/02/15 08:06:00
*/
#include <iostream>
using namespace std;

int main()
{
    int N, A, B, C, D, E, aux = 0;
    char alternativa;

    while(cin >> N && N != 0){

    for(int i = 0; i < N; i++){
        cin >> A >> B >> C >> D >> E;

        if(A <= 127){
            aux++;
            alternativa = 'A';
        }
        if(B <= 127){
            aux++;
            alternativa = 'B';
        }
        if(C <= 127){
            aux++;
            alternativa = 'C';
        }
        if(D <= 127){
            aux++;
            alternativa = 'D';
        }
        if(E <= 127){
            aux++;
            alternativa = 'E';
        }

        if(aux >= 2 || aux == 0)
            cout << "*" << endl;
        else
            cout << alternativa << endl;

        aux = 0;
    }}
}