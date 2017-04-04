#include <iostream>
using namespace std;

int main()
{
    int N, contador;
    float X;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> X;

    contador = 0;

    while(X > 1){
        X = X / 2;
        contador++;
    }
    cout << contador << " dias" << endl;
    }
}
