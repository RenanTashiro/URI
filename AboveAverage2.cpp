#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int C;
    cin >> C;

    for(int x = 0; x < C; x++){

        int N, soma = 0, maiores = 0;
        double media, porcentagem;
        cin >> N;
        int numero[N];

        for(int i = 0; i < N; i++){

            cin >> numero[i];
            soma += numero[i];
        }

        media = soma / N;

            for(int i = 0; i < N; i++){

                if(numero[i] > media)
                    maiores++;
            }
        porcentagem = (float) (maiores * 100) / N;

        cout << setiosflags(ios::fixed) << setprecision(3) << porcentagem << "%" << endl;
    }
}
