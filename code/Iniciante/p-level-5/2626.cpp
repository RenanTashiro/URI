/*
Nome:      Turma do JB6
ID:        2626
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   925 Bytes
Submissao: 10/09/17 10:31:55
*/
#include <bits/stdc++.h>
 
using namespace std;
 
bool abeatbc(string a, string b, string c) 
{
    if(a == "pedra" and b == "tesoura" and b == c)
        return true;
    else if(a == "papel" and b == "pedra" and b == c)
        return true;
    else if(a == "tesoura" and b == "papel" and b == c)
        return true;
    return false;
}
 
int main() 
{
    string dodo, leo, pepper;
    
    while(cin >> dodo >> leo >> pepper)
    {
        if(abeatbc(dodo, leo, pepper))
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        else if(abeatbc(leo, dodo, pepper))
            cout << "Iron Maiden's gonna get you, no matter how far!\n";
        else if(abeatbc(pepper, dodo, leo))
            cout << "Urano perdeu algo muito precioso...\n";
        else
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
    }
 
    return 0;
}