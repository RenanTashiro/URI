/*
Nome:      Sequência de Números e Soma
ID:        1101
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   405 Bytes
Submissao: 09/01/15 12:39:50
*/
#include <iostream>
using namespace std;

int main()
{
    int m, n, soma, aux;

    cin >> m >> n;

    while(m > 0 && n > 0){

        if(m > n){
        aux = m;
        m = n;
        n = aux;
        }

        soma= 0;

    while(m < n + 1){
        soma += m;
        cout << m << " ";
        m++;
    }
    cout << "Sum=" << soma << endl;

    cin >> m >> n;
    }
}
