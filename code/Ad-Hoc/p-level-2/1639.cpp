/*
Nome:      Gerando Números Aleatórios
ID:        1639
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.104s
Tamanho:   546 Bytes
Submissao: 28/06/15 12:03:05
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int number;

    while( cin >> number && number != 0 ){

        int counter = 0;
        map<int,int> different_numbers;

        different_numbers[number] = 1;
        number = ( number * number ) % 1000000 / 100;

        while( different_numbers[number] == 0  ){
            different_numbers[number] = 1;
            number = ( number * number ) % 1000000 / 100;
            counter++;
        }

        cout << counter + 1 << endl;
    }
}
