#include <iostream>
using namespace std;

int Krapekar(int X), highest_number(int X), lowest_number(int X);

int main()
{
    int T, X, ind;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> X;

        ind = Krapekar(X);

        cout << "Caso #"<<i+1<<": " <<  endl;
    }
}
int Krapekar(int X){

    int cnt = 0, hi, lo;

    while(X != 6174){

        hi = highest_number(X);
        lo = lowest_number(X);
        X = hi - lo;
        cnt = cnt + 1;
    }

    return cnt;
}
int highest_number(int X){

    int S[4], aux, index = 0;

    S[0] = X / 1000;
    S[1] = (X % 1000) / 100;
    S[2] = (X % 100) / 10;
    S[3] = X % 10;

    for(int i = index + 1; i < 4; i++){
        if(S[index] < S[i]){
            aux = S[index];
            S[index] = S[i];
            S[i] = aux;

        }
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

    for(int i = index + 1; i < 4; i++){
        if(S[index] < S[i]){
            aux = S[index];
            S[index] = S[i];
            S[i] = aux;

        }
        index++;
    }
    S[3] *= 1000;
    S[2] *= 100;
    S[1] *= 10;

    return S[0] + S[1] + S[2] + S[3];

}
