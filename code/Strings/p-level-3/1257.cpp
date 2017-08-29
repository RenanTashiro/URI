/*
Nome:      Array Hash
ID:        1257
Resposta:  Accepted
Linguagem: C++
Tempo:     0.084s
Tamanho:   485 Bytes
Submissao: 16/02/15 14:09:52
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, L, array_hash = 0;
    string uper_string;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> L;

        for(int k = 0; k < L; k++){

            cin >> uper_string;

            for(int l = 0; l < uper_string.size(); l++)
                array_hash += (uper_string[l] - 65)+ k + l;

        }
        cout << array_hash << endl;
        array_hash = 0;
    }
}
