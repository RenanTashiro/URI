/*
Nome:      Justificador
ID:        1273
Resposta:  Accepted
Linguagem: C++
Tempo:     0.068s
Tamanho:   554 Bytes
Submissao: 10/02/15 10:33:00
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int N, len = 0, aux = 0;
    string palavra[50];

    while(cin >> N && N != 0){

    if(aux >= 1)
        cout << endl;

        for(int i = 0; i < N; i++){

            cin >> palavra[i];

            if(len < palavra[i].length())
                len = palavra[i].length();

        }
        for(int i = 0; i < N; i++){
            cout << setw(len) << palavra[i] << endl;
        }
        aux = 1;
        len = 0;
    }
}
