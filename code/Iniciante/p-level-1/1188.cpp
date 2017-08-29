/*
Nome:      Área Inferior
ID:        1188
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   940 Bytes
Submissao: 13/01/15 09:01:34
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int selecao_colunas = 4, selecao_colunas1 = 7;
    char operacao;
    cin >> operacao;
    double matriz[12][12], resultado = 0;

    for(int linhas = 0; linhas < 12; linhas++){
        for(int colunas = 0; colunas < 12; colunas++){

        cin >> matriz[linhas][colunas];

            if(colunas > selecao_colunas && colunas < selecao_colunas1 && linhas > 6)
                resultado += matriz[linhas][colunas];
        }
        if(selecao_colunas > 0 && linhas > 6){
        selecao_colunas--;
        }
        if(selecao_colunas1 < 11 && linhas > 6){
        selecao_colunas1++;
        }

    }

    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 30 << endl;
}

