#include <iostream>
#include <ctype.h>
#include <stdio.h>
using namespace std;

int main()
{
    int N, aux = 0;
    cin >> N;
    getchar();
    string message, hidden_message;

    for(int i = 0; i < N; i++){

        getline(cin,message);

        for(int l = 0; message[l] != '\0'; l++){

            if(aux == 1){
                if(message[l] == ' ' && isalpha(message[l+1]))
                    hidden_message += message[l+1];
            }

            else if(isalpha(message[l])){
                hidden_message = message[l];
                aux = 1;
            }
        }
        cout << hidden_message << endl;
        aux = 0;
        hidden_message = " ";
    }
}
