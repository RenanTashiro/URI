/*
Nome:      Formatação Monetária
ID:        1309
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   777 Bytes
Submissao: 30/01/15 16:17:12
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len, i, b;
    string dollar, cent;

    while(cin >> dollar >> cent){

        cout << "$";
        len = dollar.length();
        b = i = 0;

    if(len % 3 == 1 && len != 2 && len != 1){
        cout << dollar[0] << ",";
        i = 1;
    }
    else if(len % 3 == 2 && len != 2 && len != 1){
        cout << dollar[0] << dollar[1] << ",";
        i = 2;
    }
        for(i; i < len; i++){
            if(b % 3 == 0 && b != 0)
                cout << ",";
        cout << dollar[i];
        b++;
        }

        cout << ".";

        if(cent.length() == 1)
            cout << 0 << cent << endl;
        else
            cout << cent << endl;
    }
}
