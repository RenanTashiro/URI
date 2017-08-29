/*
Nome:      Cara ou Coroa
ID:        1329
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   430 Bytes
Submissao: 19/01/15 15:39:05
*/
#include <iostream>
using namespace std;

int main()
{
    int N, R, Mary, John;

    while(N  != 0){

    cin >> N;

    if(N == 0)
        break;

    Mary = 0;
    John = 0;

    for(int i = 0; i < N; i++){
        cin >> R;
        if(R == 0)
            Mary++;
        else
            John++;
    }
    cout << "Mary won " << Mary << " times and John won " << John << " times" << endl;
    }

}
