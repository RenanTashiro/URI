#include <iostream>
using namespace std;

int primo(int i){

for(int j = 2; j < i; j++){  //Funcao para determinar se eh um numero primo ou nao
    if(i % j == 0 && i != j)
        return 0;
}
        return 1;
}

int main()
{
    int N, primos[500], contador = 0, X;
    cin >> N;

        for(int i = 2; contador < 500; i++){ //Armazenamento dos 500 primeiros numeros primos
            if(primo(i) == 1){
            primos[contador] = i;
            contador++;
            }
        }

    for(int i = 0; i < N; i++){

    cin >> X;

    for(int i = 0; i < 500; i++){
        if(X % primos[i] == 0 && X != primos[i]){
            cout << "Not Prime" << endl;
            break;
        }
        else if(i == 499)
            cout << "Prime" << endl;
    }


    }
}

