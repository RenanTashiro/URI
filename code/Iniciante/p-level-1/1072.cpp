/*
Nome:      Intervalo 2
ID:        1072
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   365 Bytes
Submissao: 07/01/15 15:31:51
*/
#include <iostream>
using namespace std;

int main()
{
    int v, in = 0, out = 0;
    cin >> v;
    int n[v];

    for(int i = 0; i < v; i++){
        cin >> n[i];
    if(n[i] <= 20 && n[i] >= 10)
        in = in + 1;
    if(!(n[i] <= 20) || !(n[i] >= 10))
        out = out + 1;
    }
    cout << in << " in" << endl << out << " out" << endl;
}
