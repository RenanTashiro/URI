/*
Nome:      Sentença Dançante
ID:        1234
Resposta:  Accepted
Linguagem: C++
Tempo:     0.084s
Tamanho:   1,15 KB
Submissao: 26/01/15 15:49:05
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X, index, checagem;
    string sentence;

    while(getline(cin,sentence)){

    char sentenca[sentence.length()];

index = 0;

    while(index < sentence.length()) {
        sentenca[index] = sentence[index];
        index = index + 1;
}
    X = 2;
    checagem = 0;

        for(int i = 0; i < sentence.length(); i++){

            if(checagem == 0 && sentenca[i] != ' '){
            if(sentenca[i] > 96){
                sentenca[i] = sentenca[i] - 32;
            }
                 cout << sentenca[i];
                 checagem = 1;
            }
            else if(sentenca[i] == ' ')
                cout << " ";

            else if(X % 2 == 0){
                if(sentenca[i] < 97)
                sentenca[i] = sentenca[i] + 32;
                cout << sentenca[i];
                X++;
            }
            else if(X % 2 != 0){
                if(sentenca[i] > 96)
                    sentenca[i] = sentenca[i] - 32;
                    cout << sentenca[i];
                    X++;
            }
    }
      cout << endl;
    }
}
