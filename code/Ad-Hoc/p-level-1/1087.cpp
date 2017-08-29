/*
Nome:      Dama
ID:        1087
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   456 Bytes
Submissao: 17/01/15 13:27:32
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int X, X2, Y, Y2;

   while(cin >> X >> Y >> X2 >> Y2){

    if(X == 0 && Y == 0 && X2 == 0 && Y2 == 0)
        break;
    if(X == X2 && Y == Y2){
        cout << 0 << endl;
        continue;
    }
    else if(X == X2 || Y == Y2 || fabs(X2 - X) == fabs(Y2 - Y)){
        cout << 1 << endl;
        continue;
    }
    else
        cout << 2 << endl;
   }
}
