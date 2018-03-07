/*
Nome:      Ajude Girafales
ID:        1911
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,07 KB
Submissao: 09/09/15 18:45:54
*/
#include <iostream>
#include <string>
#include <cctype>
#include <map>
using namespace std;

int isTrue( string assinatura_original, string checagem )
{
    int counter = 0;

    for( unsigned i = 0; i < assinatura_original.size(); i++ )
    {
        if( ( !isupper( assinatura_original[i] ) && isupper( checagem[i] ) ) ||
            (  isupper( assinatura_original[i] ) && !isupper( checagem[i] ) )  )
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    int N, M;

    while( cin >> N && N != 0 )
    {
        map<string,string> aluno_assinatura;
        string nome, assinatura;

        for( int i = 0; i < N; i++ )
        {
            cin >> nome >> assinatura;
            aluno_assinatura[nome] = assinatura;
        }

        cin >> M;

        int falsos = 0;

        for( int i = 0; i < M; i++ )
        {
            cin >> nome >> assinatura;
            if( isTrue( aluno_assinatura[nome], assinatura ) > 1 )
                falsos++;
        }

        cout << falsos << endl;
    }
}
