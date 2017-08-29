/*
Nome:      Resto 2
ID:        1075
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   204 Bytes
Submissao: 07/01/15 16:12:26
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;

    while(i < 10000){
        i = i +1;

    if(i % n == 2){
        cout << i << endl;
    }

}
}
