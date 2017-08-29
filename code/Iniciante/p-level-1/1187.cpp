/*
Nome:      Área Superior
ID:        1187
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   910 Bytes
Submissao: 13/01/15 08:55:19
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int selecao_colunas = 0, selecao_colunas1 = 11;
    char operacao;
    cin >> operacao;
    double matriz[12][12], resultado = 0;

    for(int linhas = 0; linhas < 12; linhas++){
        for(int colunas = 0; colunas < 12; colunas++){

        cin >> matriz[linhas][colunas];

            if(colunas > selecao_colunas && colunas < selecao_colunas1 && linhas < 5)
                resultado += matriz[linhas][colunas];
        }
        if(selecao_colunas < 4){
        selecao_colunas++;
        }
        if(selecao_colunas1 > 7){
        selecao_colunas1--;
        }

    }

    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 30 << endl;
}
