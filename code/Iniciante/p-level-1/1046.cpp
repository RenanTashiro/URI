/*
Nome:      Tempo de Jogo
ID:        1046
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   328 Bytes
Submissao: 06/01/15 19:15:51
*/
#include <iostream>
using namespace std;

int main()
{
    int start, endt, total;
    cin >> start >> endt;

    if(endt < start)
    total = 24 - start + endt;
    if(endt > start)
    total = endt - start;
    if(endt == start)
    total = 0;

    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

}
