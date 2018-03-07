/*
Nome:      Sequências Crescentes
ID:        1146
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.184s
Tamanho:   273 Bytes
Submissao: 11/10/15 13:32:18
*/
#include <iostream>
using namespace std;
  
int main()
{
    ios::sync_with_stdio( false );
     
    int x;
  
    while( cin >> x && x != 0){
        cout << 1;
        for(int i = 2; i <= x; i++)
            cout << " " << i;
        cout << "\n";
    }
}