/*
Nome:      Máquina de Verificação Automatizada
ID:        1743
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   449 Bytes
Submissao: 26/02/15 09:53:57
*/
#include <iostream>
using namespace std;

int main()
{
    int cond;
    string connector_one, connector_two;

    while(getline(cin, connector_one), getline(cin, connector_two)){

    for(int i = 0; i < 9; i += 2){
        if(connector_one[i] == connector_two[i]){
            cond = 1;
            break;
        }
    }
    if(cond == 1)
        cout << "N\n";
    else
        cout << "Y\n";
        
    cond = 0;
    }
}