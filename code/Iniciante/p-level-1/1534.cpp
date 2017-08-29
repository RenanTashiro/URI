/*
Nome:      Matriz 123
ID:        1534
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   501 Bytes
Submissao: 16/01/15 18:39:25
*/
#include <iostream>

using namespace std;

int main()
{
    int N, diagonal_2, teste = 0;

    while(cin >> N){

    if(!(N >= 3) && !(N <= 70))
        break;
    for(int l = 0; l < N; l++){

         diagonal_2 = N - (l + 1);

        for(int c = 0; c < N; c++){

            if(c == diagonal_2)
                cout << 2;
            else if(c == l)
                cout << 1;
            else
                cout << 3;

        }
        cout << endl;
    }
    }
}
