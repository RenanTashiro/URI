#include <iostream>
#include <cmath>
using namespace std;

int main(){

    unsigned int long N, A, B, aux, X;
    int contador;
    cin >> N;

    for(int i = 0; i < N; i++){

    cin >> A >> B;
    contador = 1;
    X = B;

    while(X > 0){
        X = X / 10;
        contador *= 10;
    }
    aux = A / contador;

  if((A - aux * contador) - B == 0 || A - B == 0)
        cout << "encaixa" << endl;
  else
        cout << "nao encaixa" << endl;
    }
}
