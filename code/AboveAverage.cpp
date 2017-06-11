#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int C, N;
    cin >> C;

    for(int i = 0; i < C; i ++){
        cin >> N;
        int nota[N];

        for(int l = 0; l < N; l++){
            cin >> nota[i];
        }

    double soma = 0,acima = 0, x = N;
    double media = 0, porcentagem = 0;

        for(int l = 0; l < N; l++){
            soma = soma + nota[i];
        }

    media = soma / x;
    cout << media << endl;

        for(int i = 0; i < N; i++){
            if(nota[i] > media)
                acima++;
        }
    porcentagem = acima * 100 / N;

    cout << setiosflags(ios::fixed) << setprecision(3) << porcentagem << "%" << endl;

    }
}
