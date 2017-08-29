/*
Nome:      Sequencia IJ 3
ID:        1097
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   427 Bytes
Submissao: 08/01/15 11:04:36
*/
#include <iostream>
using namespace std;

int main()
{
    int i = 1,j = 7;

    cout << "I=" << i << " J=" << j << endl;

    while(i < 9){
        j -= 1;
        i = i;
        if(i + 4 > j){
            i += 2;
            j += 5;

        }
        cout << "I=" << i << " J=" << j << endl;
    }
        cout << "I=" << 9 << " J=" << 14 << endl;
        cout << "I=" << 9 << " J=" << 13 << endl;

}
