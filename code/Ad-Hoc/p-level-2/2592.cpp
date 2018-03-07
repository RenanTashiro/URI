/*
Nome:      VaiNaSort
ID:        2592
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.544s
Tamanho:   735 Bytes
Submissao: 14/06/17 19:19:00
*/
#include <iostream>
 
using namespace std;
 
int main() 
{
    int N;
    
    while(cin >> N && N != 0)
    {
        int count = 0;
        
        while(1)
        {
            count++;
            
            bool sorted = true;
            int expected = 1;
            
            for(int i = 0; i < N; i++)   
            {
                int value;
                
                cin >> value;
                
                if(value != expected++)
                {
                    sorted = false;
                }
            }
            
            if(sorted)
            {
                break;
            }
        }
        
        cout << count << endl;
    }
}