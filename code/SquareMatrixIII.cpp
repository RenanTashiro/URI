#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, coluna, linha, espaco;
    while(N != 0){

    cin >> N;

    if(N == 0){
    break;
    }

    if(N == 1)
        espaco = 0;
    else if(N == 2)
        espaco = 2;
    else if(N == 3 || N == 4)
        espaco = 3;
    else if(N == 5)
        espaco = 4;
    else if(N == 6 || N == 7)
        espaco = 5;
    else if(N == 8 || N == 9)
        espaco = 6;
    else if(N == 10)
        espaco = 7;
    else if(N == 11 || N == 12)
        espaco = 8;
    else if(N == 13 || N == 14)
        espaco = 9;
    else
        espaco = 10;

            linha = 1;

        for(int l = 0; l < N; l++){

            coluna = 1;

            for(int c = 0; c < N; c++){

                if(c == 0)
                cout << setw(espaco - 1) << linha * coluna;
                else
                cout << setw(espaco) << linha * coluna;

                coluna *= 2;
            }
        linha *= 2;
        cout << endl;
        }
        cout << endl;
    }
}
