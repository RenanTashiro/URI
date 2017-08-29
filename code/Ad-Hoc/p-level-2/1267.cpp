/*
Nome:      Biblioteca Pascal
ID:        1267
Resposta:  Accepted
Linguagem: C++
Tempo:     0.108s
Tamanho:   956 Bytes
Submissao: 03/02/15 11:14:29
*/
#include <iostream>
using namespace std;

int main()
{
    int N, D, yes, l, c;

    while(cin >> N >> D && D != 0 && N != 0){

    int matriz[D][N];

        for(int i = 0; i < D; i++){
                l = 0;
            for(int k = 0; k < N; k++){
                cin >> matriz[i][k];
                if(matriz[i][k] == 1){
                    l += 1;
                }
                if(l == N && N > D)
                    yes = 1;
            }
        }

        for(int i = 0; i < N+1; i++){
                c = 0;
                if(yes == 1){
                cout << "yes" << endl;
                break;
                }
            for(int k = 0; k < D; k++){
                if(matriz[k][i] == 1){
                    c += 1;
                }
                if(c == D)
                    yes = 1;
            }
        }
        if(yes != 1)
        cout << "no" << endl;

        yes = 0;
    }
}