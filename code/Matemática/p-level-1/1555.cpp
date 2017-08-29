/*
Nome:      Funções
ID:        1555
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   634 Bytes
Submissao: 16/02/15 08:17:38
*/
#include <iostream>
using namespace std;

int Square(int x){
    return x*x;
}
int Cubic(int y){
    return y*y*y;
}

int main()
{
    int N, x, y, Beto, Carlos, Rafael;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> x >> y;

        Rafael = Square(3 * x) + Square(y);
        Beto = 2 * (Square(x)) + Square(5 * y);
        Carlos = -100 * x + Cubic(y);

        if(Rafael > Beto && Rafael > Carlos)
            cout << "Rafael ganhou" << endl;
        else if(Beto > Carlos)
            cout << "Beto ganhou" << endl;
        else
            cout << "Carlos ganhou" << endl;
    }
}
