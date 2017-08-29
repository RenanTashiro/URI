/*
Nome:      Par ou Ímpar
ID:        1074
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   573 Bytes
Submissao: 07/01/15 16:01:20
*/
#include <iostream>
using namespace std;

int main()
{
    int v;
    cin >> v;
    int n[v];

    for(int i = 0; i < v; i++){
        cin >> n[i];

    if(n[i] > 0 && n[i] % 2 == 0){
        cout << "EVEN POSITIVE" << endl;
    }
    if(n[i] < 0 && n[i] % 2 == 0){
        cout << "EVEN NEGATIVE" << endl;
    }
    if(n[i] > 0 && n[i] % 2 == 1){
        cout << "ODD POSITIVE" << endl;
    }
    if(n[i] < 0 && n[i] % 2 != 0){
        cout << "ODD NEGATIVE" << endl;
    }
    if(n[i] == 0){
        cout << "NULL" << endl;
    }
    }


}
