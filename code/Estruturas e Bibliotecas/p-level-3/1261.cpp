/*
Nome:      Pontos de Feno
ID:        1261
Resposta:  Accepted
Linguagem: C++
Tempo:     0.116s
Tamanho:   547 Bytes
Submissao: 19/06/15 14:45:56
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int M, N, salary;
    string job, words;
    map< string, int > employee;

    cin >> M >> N;

    for( int i = 0; i < M; i++ ){
        cin >> job >> salary;
        employee[job] = salary;
    }

    for( int i = 0; i < N; i++ ){

        int total_salary = 0;

        while( cin >> words && words.compare( "." ) != 0 ){
            total_salary += employee[words];
        }

        cout << total_salary << endl;
    }
}
