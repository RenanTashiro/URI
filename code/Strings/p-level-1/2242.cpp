/*
Nome:      Huaauhahhuahau
ID:        2242
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   422 Bytes
Submissao: 12/09/16 20:38:06
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string in, nin = "";
    
    cin >> in;
    
    for(auto c : in)
        if(c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u')
            nin += c;
            
    string cnin = nin;
    
    reverse(cnin.begin(), cnin.end());
    
    if(cnin == nin)
        puts("S");
    else
        puts("N");
    
    return 0;
}