/*
Nome:      Botas Perdidas
ID:        1245
Resposta:  Accepted
Linguagem: C++
Tempo:     0.160s
Tamanho:   698 Bytes
Submissao: 03/02/15 08:39:19
*/
#include <iostream>
using namespace std;

int main()
{
    int N, M, contD = 0, contL = 0, combina = 0;
    char X;

    while(cin >> N){

    int D[N], E[N];

        for(int i = 0; i < N; i++){

            cin >> M >> X;

        if(X == 'D'){
            D[contD] = M;
            contD++;
        }
        else{
            E[contL] = M;
            contL++;
        }
        }

    for(int i = 0; i < contD; i++){
        for(int j = 0; j < contL; j++){
            if(D[i] == E[j]){
             combina++;
             E[j] = 1;
             break;
            }
        }
    }
    cout << combina << endl;
    combina = contD = contL = 0;

    }
}