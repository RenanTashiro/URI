/*
Nome:      Kaprekar
ID:        1785
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   1,68 KB
Submissao: 07/03/15 08:39:40
*/
#include <iostream>
using namespace std;

int Krapekar(int X), highest_number(int X), lowest_number(int X);

int main()
{
    int T, X, ind;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> X;

        if(X == 0){
            cout << "Caso #"<<i+1<<": -1" << endl;
            continue;
        }
        ind = Krapekar(X);

        cout << "Caso #"<<i+1<<": " << ind << endl;
    }
}
int Krapekar(int X){

    int cnt = 0, hi, lo;

    while(X != 6174){

        hi = highest_number(X);
        lo = lowest_number(X);
        X = hi - lo;
            if(X == 0){
                cnt = -1;
                break;
            }
        cnt = cnt + 1;
    }

    return cnt;
}
int highest_number(int X){

    int S[4], index = 0, aux;

    S[0] = X / 1000;
    S[1] = X % 1000 / 100;
    S[2] = X % 100 / 10;
    S[3] = X % 10;

    while(index <= 2){
        for(int i = index + 1; i < 4; i++){
            if(S[index] < S[i]){
                aux = S[index];
                S[index] = S[i];
                S[i] = aux;
        }}
        index++;
    }
    S[0] *= 1000;
    S[1] *= 100;
    S[2] *= 10;

    return S[0] + S[1] + S[2] + S[3];

}
int lowest_number(int X){

    int S[4], aux, index = 0;

    S[0] = X / 1000;
    S[1] = (X % 1000) / 100;
    S[2] = (X % 100) / 10;
    S[3] = X % 10;

    while(index <= 2){
        for(int i = index + 1; i < 4; i++){
            if(S[index] < S[i]){
                aux = S[index];
                S[index] = S[i];
                S[i] = aux;
        }}
        index++;
    }
    S[3] *= 1000;
    S[2] *= 100;
    S[1] *= 10;

    return S[0] + S[1] + S[2] + S[3];

}