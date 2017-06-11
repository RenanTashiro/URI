#include <iostream>
using namespace std;

int main()
{
    int N, X, teste, contador, total;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> X;

        contador = 0;
        teste = 1;
        total = 0;

        while(contador < X / 2){

            if(X % teste == 0){
                total += teste;
            }

            contador++;
            teste++;
        }

        if(total == X + 1)
            cout << X << " eh primo" << endl;
        else
            cout << X << " nao eh primo" << endl;
    }
}
