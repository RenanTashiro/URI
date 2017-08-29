/*
Nome:      Matriz Quadrada II
ID:        1478
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   739 Bytes
Submissao: 17/02/15 17:55:44
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int N, valor_linha, valor_coluna;
    while(cin >> N && N != 0){
 
        for(int l = 0; l < N; l++){
                valor_linha = l + 1;
                valor_coluna = l + 1;
            for(int c = 0; c < N; c++){
 
            if(c == 0)
                cout << setw(3) << valor_linha++;
            else if(l == 0)
                cout << setw(4) << valor_linha++;
            else{
                if(l >= c)
                cout << setw(4) << --valor_coluna;
                else
                cout << setw(4) << ++valor_coluna;
            }
 
            }
        cout << endl;
        }
        cout << endl;
    }
}