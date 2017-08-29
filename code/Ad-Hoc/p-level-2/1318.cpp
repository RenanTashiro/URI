/*
Nome:      Bilhetes Falsos
ID:        1318
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   442 Bytes
Submissao: 25/02/15 08:17:56
*/
#include <iostream>
using namespace std;

int main()
{
    int N, M, temp, ticket_false = 0;

    while(cin >> N >> M && N != 0 && M != 0){

        int buffer[10001] = {0};

       for(int i = 0; i < M; i++){
            cin >> temp;
            buffer[temp] += 1;
                if(buffer[temp] == 2)
                    ticket_false++;
       }
       cout << ticket_false << endl;
       ticket_false = 0;

    }
}
