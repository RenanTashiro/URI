/*
Nome:      Contando Carneirinhos
ID:        1609
Resposta:  Accepted
Linguagem: C++
Tempo:     0.392s
Tamanho:   567 Bytes
Submissao: 20/01/15 16:43:57
*/
#include <iostream>
using namespace std;

void comparar(void){



}

int main()
{
    int T, N, contador, ja_foi;
    cin >> T;
    for(int i = 0; i < T; i++){

        cin >> N;
        int S[N], excecao[N];
        contador = N;

        for(int y = 0; y < N; y++){

            cin >> S[y];

            for(int z = 0; z < y; z++){
                if(S[y] == S[y - (z + 1)]){
                    contador--;
                    break;
                }
            }

        }
            cout << contador << endl;
        }

}
