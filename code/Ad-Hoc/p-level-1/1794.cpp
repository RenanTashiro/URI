/*
Nome:      Lavanderia
ID:        1794
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   335 Bytes
Submissao: 28/05/15 14:49:01
*/
#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int LA, LB;
    int SA, SB;

    cin >> LA >> LB;
    cin >> SA >> SB;

    if( N >= LA && N <= LB && N >= SA && N <= SB ){
        cout << "possivel\n";
    }
    else{
        cout << "impossivel\n";
    }

    return 0;
}
