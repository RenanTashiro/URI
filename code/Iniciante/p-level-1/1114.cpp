/*
Nome:      Senha Fixa
ID:        1114
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   236 Bytes
Submissao: 09/01/15 12:40:23
*/
#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    while(m != 2002){
    if(m != 2002)
    cout << "Senha Invalida" << endl;
    cin >> m;
    }

    cout << "Acesso Permitido" << endl;
}
