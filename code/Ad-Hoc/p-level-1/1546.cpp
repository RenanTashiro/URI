/*
Nome:      Feedback
ID:        1546
Resposta:  Accepted
Linguagem: C++
Tempo:     0.044s
Tamanho:   508 Bytes
Submissao: 04/02/15 09:53:04
*/
#include <iostream>
using namespace std;

int main()
{
    int N, K, n;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> K;

        for(int l = 0; l < K; l++){

            cin >> n;

            switch(n){
                case 1: cout << "Rolien" << endl; break;
                case 2: cout << "Naej" << endl; break;
                case 3: cout << "Elehcim" << endl; break;
                case 4: cout << "Odranoel" << endl; break;
            }
        }
    }
}
