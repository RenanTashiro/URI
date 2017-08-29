/*
Nome:      Concurso de Contos
ID:        1222
Resposta:  Accepted
Linguagem: C++
Tempo:     0.068s
Tamanho:   941 Bytes
Submissao: 08/02/15 08:44:49
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, L, C, cont = 0, linhas = 0, paginas = 1, len, comp = 0;
    string story;

    while(cin >> N >> L >> C){

       for(int i = 0; i < N; i++){

            cin >> story;
        len = story.length();

        if(len == C || cont + len == C)
            cont += len;
        else
            cont += len + 1;

        if(cont >= C){
            if(cont == C){
                cont = 0;
                if(i == N - 1)
                    comp = 1;
            }
            else if(cont > C)
                cont = len + 1;

                linhas++;
                if(linhas == L){
                    linhas = 0;
                    if(comp == 0)
                     paginas++;
                }
        }
       }
        cout << paginas << endl;
        linhas = cont = comp = 0;
        paginas = 1;

    }
}
