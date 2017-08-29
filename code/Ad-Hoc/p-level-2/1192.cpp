/*
Nome:      O jogo Matemático de Paula
ID:        1192
Resposta:  Accepted
Linguagem: C++
Tempo:     0.168s
Tamanho:   468 Bytes
Submissao: 31/01/15 13:13:34
*/
#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int N, first, second;
    char letter;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> first >> letter >> second;

        if(first == second){
            cout << first * second << endl;
        }
        else if(isupper(letter)){
            cout << second - first << endl;
        }
        else
            cout << first + second << endl;
    }
}
