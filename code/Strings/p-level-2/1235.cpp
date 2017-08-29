/*
Nome:      De Dentro para Fora
ID:        1235
Resposta:  Accepted
Linguagem: C++
Tempo:     0.068s
Tamanho:   633 Bytes
Submissao: 26/01/15 19:59:17
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N, length;
    string frase;
    cin >> N;

    for(int i = 0; i < N; i++){

        if(i == 0)
        getchar();

        getline(cin,frase);

        length = frase.length();
        char corretor[length];

        for(int k = 0; k < length; k++){
            corretor[k] = frase[k];
        }

        for(int k = length / 2 - 1; k > -1; k--){
            cout << corretor[k];
        }
        for(int k = length - 1; k > length / 2 - 1; k--){
            cout << corretor[k];
        }
    cout << endl;
    }
}
