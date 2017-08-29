/*
Nome:      PUM
ID:        1142
Resposta:  Accepted
Linguagem: C++
Tempo:     0.052s
Tamanho:   282 Bytes
Submissao: 08/01/15 19:41:27
*/
#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int j = -3, k = -2, l = -1;
    for(int z = 0; z < i; z++){
        j += 4;
        k += 4;
        l += 4;
        cout << j << " " << k << " " << l << " PUM" << endl;
    }
}



