/*
Nome:      Escala de Cinza
ID:        2630
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   642 Bytes
Submissao: 10/09/17 10:23:09
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N;
    
    cin >> N;
    
    for(int t = 1; t <= N; t++)
    {
        string op;
        int R, G, B;
        
        cin >> op >> R >> G >> B;
        
        cout << "Caso #" << t << ": ";
        
        if(op == "eye") 
            cout << (int)(0.30*R + 0.59*G + 0.11*B) << endl;
        else if(op == "mean")
            cout << (R + G + B) / 3 << endl;
        else if(op == "max") 
            cout << max(R, max(G, B)) << endl;
        else if(op == "min")
            cout << min(R, min(G, B)) << endl;
    }
 
    return 0;
}