/*
Nome:      Acima da Diagonal Principal
ID:        1183
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   720 Bytes
Submissao: 13/01/15 08:03:11
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int selecao_colunas = 0;
    char operacao;
    cin >> operacao;
    float matriz[12][12], resultado = 0;

    for(int linhas = 0; linhas < 12; linhas++){
        for(int colunas = 0; colunas < 12; colunas++){

        cin >> matriz[linhas][colunas];

            if(colunas > selecao_colunas)
                resultado += matriz[linhas][colunas];
        }
        selecao_colunas++;
    }

    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 66 << endl;
}
