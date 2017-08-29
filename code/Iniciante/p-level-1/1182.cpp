/*
Nome:      Coluna na Matriz
ID:        1182
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   676 Bytes
Submissao: 12/01/15 19:00:24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int C;
    cin >> C;
    char operacao;
    cin >> operacao;
    float matriz[12][12], resultado = 0;

    for(int linhas = 0; linhas < 12; linhas++){
        for(int colunas = 0; colunas < 12; colunas++){

        cin >> matriz[linhas][colunas];

            if(colunas == C)
                resultado += matriz[linhas][colunas];
        }
    }

    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 12 << endl;
}
