/*
Nome:      Sequências Crescentes
ID:        1146
Resposta:  Accepted
Linguagem: C++
Tempo:     0.292s
Tamanho:   230 Bytes
Submissao: 11/10/15 13:31:25
*/
#include <iostream>
using namespace std;
  
int main()
{
    int x;
  
    while( cin >> x && x != 0){
        cout << 1;
        for(int i = 2; i <= x; i++)
            cout << ' ' << i;
        cout << "\n";
    }
}