/*
Nome:      Adivinha
ID:        1547
Resposta:  Accepted
Linguagem: C++
Tempo:     0.088s
Tamanho:   881 Bytes
Submissao: 04/02/15 10:42:20
*/
#include <iostream>
#include <cmath>
using namespace std;

int Menor(int valores[], int len, int i){

int menor = valores[0], ind = i;

    for(i; i < len; i++){
        if(menor > valores[i]){
            valores[0] = valores[i];
            ind = i;
            return Menor(valores,len,i);
        }
    }
    return ind;
}

int main()
{
    int N, QT, S, valores, ind = 0;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> QT >> S;
        int cont[QT];

        for(int l = 0; l < QT; l++){

            cin >> valores;

            if(valores == S && ind == 0){
                ind = l + 1;
            }
            else
                cont[l] = fabs(S - valores);
        }
        if(ind != 0)
            cout << ind << endl;
        else
            cout << Menor(cont,QT,0) + 1 << endl;

    ind = 0;
    }
}
