/*
Nome:      Rot13
ID:        1249
Resposta:  Accepted
Linguagem: C++
Tempo:     0.072s
Tamanho:   477 Bytes
Submissao: 29/01/15 15:35:40
*/
#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    string message;

    while(getline(cin,message)){

       for(int i = 0; i < message.length(); i++){

        if(isalpha(message[i])){
            if(message[i] > 77 && message[i] < 91 || message[i] > 109)
                message[i] -= 13;
            else
                message[i] += 13;
        }
            cout << message[i];
       }
            cout << endl;
    }
}
