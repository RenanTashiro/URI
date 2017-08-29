/*
Nome:      Crescente e Decrescente
ID:        1113
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   260 Bytes
Submissao: 09/01/15 12:40:13
*/
#include <iostream>
using namespace std;

int main()
{
    int m, n;

    do{
    cin >> m >> n;

    if(m > n){
        cout << "Decrescente" << endl;
    }
    if(m < n){
        cout << "Crescente" << endl;
    }

    }while(m != n);

}
