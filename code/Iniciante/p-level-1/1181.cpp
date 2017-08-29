/*
Nome:      Linha na Matriz
ID:        1181
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   673 Bytes
Submissao: 08/08/15 07:21:54
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int L;
    cin >> L;
    char operacao;
    cin >> operacao;
    float matriz[12][12], resultado = 0;
 
    for(int linhas = 0; linhas < 12; linhas++){
        for(int colunas = 0; colunas < 12; colunas++){
 
        cin >> matriz[linhas][colunas];
 
            if(linhas == L)
                resultado += matriz[L][colunas];
        }
    }
 
    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 12 << endl;
}