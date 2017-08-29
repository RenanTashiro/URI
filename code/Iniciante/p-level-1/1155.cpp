/*
Nome:      Sequência S
ID:        1155
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   243 Bytes
Submissao: 10/01/15 09:22:58
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float s, total = 0;

    for(s = 1; s < 100 + 1; s++){
    total += 1 / s;
}
    cout << setiosflags(ios::fixed) << setprecision(2) << total << endl;
}
