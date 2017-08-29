/*
Nome:      Cifra de César
ID:        1253
Resposta:  Accepted
Linguagem: C++
Tempo:     0.108s
Tamanho:   473 Bytes
Submissao: 29/01/15 15:58:08
*/
#include <iostream>
using namespace std;

int main()
{
    int N, chave;
    char message[51];

    cin >> N;

    for(int j = 0; j < N; j++){

        cin >> message >> chave;

        for(int i = 0; message[i] != '\0'; i++){
            if(message[i] < 65 + chave)
                message[i] = (char) message[i] + (26 - chave);
            else
                message[i] = (char) message[i] - chave;
        }
        cout << message << endl;
}
}
