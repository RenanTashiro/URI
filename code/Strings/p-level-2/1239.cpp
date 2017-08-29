/*
Nome:      Atalhos Bloggo
ID:        1239
Resposta:  Accepted
Linguagem: C++
Tempo:     0.164s
Tamanho:   905 Bytes
Submissao: 28/01/15 17:30:56
*/
#include <iostream>
using namespace std;

int main()
{
    int len, contador1, contador2;
    string frase;

    while(getline(cin,frase)){

        len = frase.length();

        contador1 = 0;
        contador2 = 0;

        for(int i = 0; i < len; i++){
            if(frase[i] == '_' && contador1 == 0){
                cout << "<i>";
                contador1++;
            }
            else if(frase[i] == '_' && contador1 == 1){
                cout << "</i>";
                contador1 = 0;
            }

            else if(frase[i] == '*' && contador2 == 0){
                cout << "<b>";
                contador2++;
            }
            else if(frase[i] == '*' && contador2 == 1){
                cout << "</b>";
                contador2 = 0;
            }
            else
            cout << frase[i];
        }
        cout << endl;
    }
}
