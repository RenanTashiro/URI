/*
Nome:      Matriz de Quadrados
ID:        1578
Resposta:  Accepted
Linguagem: C++
Tempo:     0.020s
Tamanho:   1,23 KB
Submissao: 05/02/15 16:35:18
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, M, x = 4;
    cin >> N;

    for(int i = 0; i < N; i++){

    if(i > 0)
    cout << endl;

    cin >> M;

    unsigned int long long a[M][M], total[M], maior[M], espacamento[M];

       for(int l = 0; l < M; l++){
            for(int c = 0; c < M; c++){
                cin >> a[l][c];
       }    }
        for(int c = 0; c < M; c++){
               maior[c] = a[0][c];
            for(int l = 0; l < M; l++){
                if(a[l][c] > maior[c]){
                    maior[c] = a[l][c];
            }}
            total[c] = maior[c] * maior[c];
            }

       for(int c = 0; c < M; c++){
                espacamento[c] = 1;
            while((total[c] = total[c] / 10) > 0)
                espacamento[c]++;
        }

    cout << "Quadrado da matriz #" << x << ":" << endl;
    x++;

        for(int l = 0; l < M; l++){
            for(int c = 0; c < M; c++){
            if(c == 0)
            cout << setw(espacamento[c]) << a[l][c] * a[l][c];
            else
            cout << setw(espacamento[c] + 1) << a[l][c] * a[l][c];
            }
            cout << endl;
        }
        }
    return 0;
}
