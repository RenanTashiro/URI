/*
Nome:      Grenais
ID:        1131
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   748 Bytes
Submissao: 09/01/15 14:01:37
*/
#include <iostream>
using namespace std;

int main()
{
    int g, i, gw = 0, iw = 0, empate = 0, aux, grenais = 0;

    do{
    cin >> i >> g;
    if(i > g){
        iw++;
    }
    else if(i < g){
        gw++;
    }
    else
        empate++;

    grenais++;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> aux;

    }while(aux != 2);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << iw << endl;
    cout << "Gremio:" << gw << endl;
    cout << "Empates:" << empate << endl;
     if(iw > gw){
        cout << "Inter venceu mais" << endl;
     }
    else if(iw < gw){
        cout << "Gremio venceu mais" << endl;
    }
    else
        cout << "Nao houve vencedor" << endl;
}
