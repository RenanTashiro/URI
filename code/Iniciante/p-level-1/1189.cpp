/*
Nome:      Área Esquerda
ID:        1189
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1.013 Bytes
Submissao: 13/01/15 09:26:02
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int colunas, selecao_colunas = 0, selecao_colunas1 = 5;
    char operacao;
    cin >> operacao;
    double matriz[12][12], resultado = 0;

    for(int linhas = 0; linhas < 12; linhas++){
        for(colunas = 0; colunas < 12; colunas++){

        cin >> matriz[linhas][colunas];

            if(linhas < 6 && linhas > 0 && colunas < selecao_colunas){
                resultado += matriz[linhas][colunas];
            }
            if(linhas > 5 && linhas < 11 && colunas < selecao_colunas1){
                resultado += matriz[linhas][colunas];
            }
        }
    if(linhas < 6){
    selecao_colunas++;
    }
    if(linhas > 5){
    selecao_colunas1--;
    }

    }

    if(operacao == 'S')
        cout << setiosflags(ios::fixed) << setprecision(1) <<  resultado << endl;
    else if(operacao == 'M')
        cout << setiosflags(ios::fixed) << setprecision(1) << resultado / 30 << endl;
}