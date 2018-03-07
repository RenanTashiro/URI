/*
Nome:      Sucessor Par
ID:        2679
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   220 Bytes
Submissao: 19/09/17 07:57:30
*/
#include <iostream>
 
using namespace std;
 
int main() 
{
    int x;
    
    cin >> x;
    
    if(x % 2 == 0)
        cout << x + 2 << endl;
    else
        cout << x + 1 << endl;
    
    return 0;
}