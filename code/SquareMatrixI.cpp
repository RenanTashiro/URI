#include <iostream>
#include <iomanip>
using namespace std;

void colunas(int c, int l ,int N){

int subtracao = c + 1, condicao = c - 1,valor = c + 1, valor1 = N - c ;

            if(c > N / 2 && l > valor1 - 2 && l < 1 + N - valor1)
                cout << setw(4) << valor1;
            else if(c == c && l > condicao && l < N - subtracao)
                cout << setw(4) << valor;
            else if(l < N / 2 )
                cout << setw(4) << l + 1;
            else if(l > N / 2 - 1)
                cout << setw(4) << N - l;
}

int main()
{
    int N;

    while(N != 0){

    cin >> N;

    if(N == 0)
        break;

    for(int l = 0; l < N; l++){
            for(int c = 0; c < N; c++){

             if(c == 0){
                cout << setw(3) << 1;
                continue;
            }
             else if(l == 0){
                cout << setw(4) << 1;
                continue;
             }
             else if(c == N - 1){
                cout << setw(4) << 1;
                continue;
             }
             else if(l == N - 1){
                cout << setw(4) << 1;
                continue;
             }
            else{
            colunas(c,l,N);
             }
    }
    cout << endl;
}
    cout << endl;
}
}


