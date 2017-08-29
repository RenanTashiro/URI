/*
Nome:      Gloud Computing
ID:        1452
Resposta:  Accepted
Linguagem: C++
Tempo:     0.288s
Tamanho:   990 Bytes
Submissao: 29/07/15 12:09:24
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N, M;

    while( cin >> N >> M && N != 0 ){

        map<string,bool> server[N];

        for( int i = 0; i < N; i++ ){
            int Q;
            string Qi;
            cin >> Q;
            for( int j = 0; j < Q; j++ ){
                cin >> Qi;
                server[i][Qi] = true;
            }
        }

        int counter = 0;

        for( int i = 0; i < M; i++ ){
            int P;
            string Pi;
            map<int,bool> notyet;
            cin >> P;
            for( int j = 0; j < P; j++ ){
                cin >> Pi;
                for( int k = 0; k < N; k++ ){
                    if( server[k][Pi] == true && notyet[k] == false ){
                        counter++;
                        notyet[k] = true;
                    }
                }
            }
        }

        cout << counter << endl;
    }

}
