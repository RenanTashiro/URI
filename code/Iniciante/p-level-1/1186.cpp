/*
Nome:      Abaixo da Diagonal Secundária
ID:        1186
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   721 Bytes
Submissao: 13/01/15 08:07:09
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int selecao_colunas = 11;
    char operacao;
    cin >> operacao;
    float matriz[12][12], resultado = 0;

    for(int linhas = 0; linhas < 12; linhas++){
        for(int colunas = 0; colunas < 12; colunas++){

        cin >> matriz[linhas][colunas];

            if(colunas > selecao_colunas)
                resultado += matriz[linhas][colunas];
        }
        selecao_colunas--;
    }

    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 66 << endl;
}
