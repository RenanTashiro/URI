/*
Nome:      Revisão de Contrato
ID:        1120
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   571 Bytes
Submissao: 07/02/15 12:36:10
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char D;
    string N, new_value;
    int aux = 0;

    while(cin >> D >> N && D != '0' && N != "0"){

        for(int i = 0; i < N.length(); i++){
            if(aux == 0 && N[i] != '0' && N[i] != D)
                aux = 1;
            if(N[i] != D && aux != 0)
                new_value += N[i];
            else if(aux == 0 && i == N.length() - 1)
                new_value = "0";
        }
    cout << new_value << endl;
    new_value.clear();
    aux = 0;
    }
}
