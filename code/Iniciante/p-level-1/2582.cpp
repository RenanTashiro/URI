/*
Nome:      System of a Download
ID:        2582
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   450 Bytes
Submissao: 14/06/17 19:13:25
*/
#include <iostream>
 
using namespace std;

string music[] = {
    "PROXYCITY", 
    "P.Y.N.G.",
    "DNSUEY!", 
    "SERVERS", 
    "HOST!", 
    "CRIPTONIZE",
    "OFFLINE DAY",
    "SALT",
    "ANSWER!",
    "RAR?",
    "WIFI ANTENNAS"
};
 
int main() 
{
    int C;
    
    cin >> C;
    
    while(C--)
    {
        int X, Y;
        
        cin >> X >> Y;
        
        cout << music[X + Y] << endl;
    }
}