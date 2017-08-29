/*
Nome:      O Teorema de Pitágoras
ID:        1582
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   678 Bytes
Submissao: 22/01/15 15:19:38
*/
#include <iostream>
using namespace std;

int MDC(unsigned int a,unsigned int b){
    int aux;

aux = a % b;

if(aux != 0)
MDC(b,aux);
else
    return b;
}


int main()
{
    int unsigned x, y, z;
    int aux;

    while(cin >> x >> y >> z){

    if(x < y){
    aux = y;
    y = x;
    x = aux;
    }
    if(x < z){
    aux = z;
    z = x;
    x = aux;
    }
    if((x * x) - (y * y) - (z * z) == 0){
        if(MDC(MDC(x,y),z) == 1)
                cout << "tripla pitagorica primitiva" << endl;
            else
                cout << "tripla pitagorica" << endl;
        }
        else
            cout << "tripla" << endl;
    }
}
