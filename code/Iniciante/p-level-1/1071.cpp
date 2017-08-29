/*
Nome:      Soma de Impares Consecutivos I
ID:        1071
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   270 Bytes
Submissao: 07/01/15 22:16:14
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, aux, Soma=0, i;
    cin >> x >> y;

    if(x > y){
    aux = x;
    x = y;
    y = aux;
    }
x+=1;

for(i = x ; i < y; i++){
if(i%2 != 0)
Soma += i;}

    cout << Soma << endl;
}
