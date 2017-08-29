/*
Nome:      De Quem é a Vez?
ID:        1914
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   772 Bytes
Submissao: 09/09/15 18:45:27
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int QT;

    cin >> QT;

    while( QT-- )
    {
        string jogador1, jogador2;
        string escolha1, escolha2;

        cin >> jogador1 >> escolha1 >> jogador2 >> escolha2;

        int num1, num2;
        int num;

        cin >> num1 >> num2;

        num = num1 + num2;

        if( escolha1 == "IMPAR" )
        {
            if( num & 1 )
                cout << jogador1 << endl;
            else
                cout << jogador2 << endl;
        }
        else if( escolha1 == "PAR" )
        {
            if(  num & 1 )
                cout << jogador2 << endl;
            else
                cout << jogador1 << endl;
        }
    }

}
