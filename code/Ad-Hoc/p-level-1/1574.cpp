/*
Nome:      Instruções do Robô
ID:        1574
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   960 Bytes
Submissao: 05/02/15 10:26:12
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    int T, p = 0, n, temp, len;
    string instrucao;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> n;
        int loc[n];
        getchar();

        for(int l = 0; l < n; l++){

            getline(cin,instrucao);

            if(instrucao == "LEFT"){
                p -= 1;
                loc[l] = -1;
            }

            else if(instrucao == "RIGHT"){
                p += 1;
                loc[l] = 1;
            }

            else{
                instrucao = instrucao[8];

                for(int i = 9; instrucao[i] != '\0'; i++)
                    instrucao += instrucao[i];

            temp = atoi(instrucao.c_str() );
            p += loc[temp-1];
            loc[l] = loc[temp-1];
            }
        }

        cout << p << endl;
        p = 0;
    }
}
