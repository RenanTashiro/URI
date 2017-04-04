#include <iostream>
using namespace std;

int main()
{
    int B, N, D, C, V, checagem;

    while(cin >> B >> N){

        if(B == 0 && N == 0)
        break;

    int R[B];

    for(int i = 0; i < B; i++) //Reserva Monteraria de cada banco
        cin >> R[i];

    for(int i = 0; i < N; i++){ //Transferencia do dinheiro
        cin >> D >> C >> V;

            R[D - 1] -= V;
            R[C - 1] += V;
    }

    checagem = 0;

    for(int i = 0; i < B; i++){ //Checagem do saldo
        if(R[i] < 0)
            checagem = 1;
    }

    if(checagem == 1)
        cout << "N" << endl;
    else
        cout << "S" << endl;
    }
}
