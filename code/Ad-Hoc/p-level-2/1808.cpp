/*
Nome:      O Retorno do Rei
ID:        1808
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   474 Bytes
Submissao: 01/06/15 14:07:34
*/
#include <iostream>
using namespace std;

int main()
{
    string grade;
    size_t counter = 0;
    double total = 0;

    cin >> grade;

    for( int i = 0; grade[i] != '\0'; i++ ){

        if( grade[i+1] == '0' ){
            total += 10;
            i++;
        }
        else{
            total += grade[i] - 48;
        }

        counter++;
    }

    cout.precision( 2 );
    cout << fixed << total / counter << endl;

    return 0;
}
