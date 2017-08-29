/*
Nome:      Vikings em Praga?
ID:        1816
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   896 Bytes
Submissao: 16/06/15 08:21:40
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, counter = 1;

    while( cin >> m && m != 0 ){

        int text[m];
        char myAlpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                          'N', 'O', 'P' , 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        vector<char> myAlpha_vector ( myAlpha, myAlpha+26 );

        for( int i = 0; i < m; i++ ){
            cin >> text[i];
        }

        cout << "Instancia "<< counter <<"" << endl;

        for( int i = 0; i < m; i++ ){
            cout << myAlpha_vector[text[i] - 1];
            myAlpha_vector.insert( myAlpha_vector.begin(), 1, myAlpha_vector[text[i] - 1] );
            myAlpha_vector.erase( myAlpha_vector.begin()+text[i] );
        }

        cout << endl << endl;
        counter++;
    }

    return 0;
}

