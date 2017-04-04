#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
using namespace std;

int main()
{
    int N, len, aux;
    cin >> N;
    string frase, frase_inverso;

    for(int i = 0; i < N; i++){

        if(i == 0)
        getchar();

        getline(cin,frase);

        len = frase.length();

        for(int k = 0; k < len; k++){
            if(isalpha(frase[k]))
                frase[k] = frase[k] + 3;
        }
        for(int k = len - 1; k > - 1; k--){
            frase_inverso += frase[k];
        }
        if(len % 2 == 0)
        for(int k = len / 2; k < len; k++){
                frase_inverso[k] = frase_inverso[k] - 1;
        }
        else
        for(int k = len / 2; k < len; k++){
                frase_inverso[k] = frase_inverso[k] - 1;
        }
        cout << frase_inverso << endl;
        frase_inverso.clear();
    }
}
