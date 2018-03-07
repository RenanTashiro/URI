/*
Nome:      Dijkstra
ID:        2653
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.084s
Tamanho:   218 Bytes
Submissao: 10/09/17 10:07:33
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    set<string> gem;
    string g;
    
    while(cin >> g)
        gem.insert(g);
        
    cout << gem.size() << endl;
 
    return 0;
}