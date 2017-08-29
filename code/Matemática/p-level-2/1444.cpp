/*
Nome:      Corrida dos Marrecos
ID:        1444
Resposta:  Accepted
Linguagem: C++
Tempo:     0.448s
Tamanho:   341 Bytes
Submissao: 03/02/15 15:32:23
*/
#include <iostream>
using namespace std;

int main()
{
    int n, races = 0;

    while(cin >> n && n != 0){

        while(n != 1){
        if(n % 3 == 0 || n == 1)
            n = (n / 3);
        else
            n = n / 3 + 1;

        races += n;
        }
        cout << races << endl;
        races = 0;
    }
}
