/*
Nome:      Arredondamento por Valor de Corte
ID:        1305
Resposta:  Accepted
Linguagem: C++
Tempo:     0.064s
Tamanho:   1,19 KB
Submissao: 10/02/15 12:08:13
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dot_loc, index = 0, aux = 0;
    string num, cutoff, round;

    while(cin >> num >> cutoff){

    dot_loc = num.find('.');

    if(dot_loc == -1){
        cout << num << endl;
        continue;
    }
        for(int i = 2; i < 6; i++){
            if(cutoff[i] < num[dot_loc + (i - 1)]){
               index = 0;
               break;
            }
            else if(cutoff[i] > num[dot_loc + (i - 1)] || num[dot_loc + (i - 1)] == '\0'){
                index = 1;
                break;
            }
        }
        if(dot_loc == 0){
            if(index == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else{
            for(int i = 0; i < dot_loc; i++){
                if(num[i] != '0' || i == dot_loc - 1)
                    aux = 1;
                if(i == dot_loc - 1 && index == 0)
                    round += num[i] + 1;
                else if(aux == 1)
                    round += num[i];
            }
            cout << round << endl;
        }
        index = aux = 0;
        round.clear();
    }
}