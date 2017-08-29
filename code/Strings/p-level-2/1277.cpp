/*
Nome:      Pouca Frequência
ID:        1277
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   1,13 KB
Submissao: 16/02/15 13:43:47
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, n_estudantes, index[105], aus = 0;
    double pres = 0, total;
    cin >> N;
    string presenca, ausentes;

    for(int i = 0; i < N; i++){

        cin >> n_estudantes;
        string nomes[n_estudantes];

        for(int k = 0; k < n_estudantes; k++)
            cin >> nomes[k];

        for(int k = 0; k < n_estudantes; k++){
            cin >> presenca;
            for(int l = 0; l < presenca.size(); l++)
                switch(presenca[l]){
                    case 'A': ++aus; break;
                    case 'P': ++pres; break;
                }

            total = (aus+pres) * 0.75;

            if(pres < total)
                index[k] = 1;
            else
                index[k] = 0;

            aus = pres = 0;
        }
        for(int k = 0; k < n_estudantes; k++){
            if(index[k] == 1){
                    if(ausentes != "\0")
                        ausentes += ' ';
                ausentes += nomes[k];
            }
        }
        cout << ausentes << endl;
        ausentes.clear();
    }
}