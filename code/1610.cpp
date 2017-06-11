#include <iostream>
#include <cstring>
#include <list>
using namespace std;

void busca( list<int> *arr, const int inicio, int atual, int *visitados )
{
    for( list<int>::iterator it = arr[atual].begin(); it != arr[atual].end(); ++it ){
        if( *it == inicio ){
            visitados[inicio] = 1;
            return;
        }
        else if( visitados[*it] == 0 ){
            visitados[*it] = 1;
            busca( arr, inicio, *it, visitados );
        }
    }
}

int main()
{
    int T;

    cin >> T;

    for( int i = 0; i < T; i++ ){

        int N, M;

        cin >> N >> M;

        list<int> documento[N+1];
        int A, B;

        for( int j = 0; j < M; j++ ){
            cin >> A >> B;
            documento[A].push_back( B );
        }

        int visitados[N+1];
        bool flag = true;

        for( int j = 1; j <= N; j++ ){

            memset( visitados, 0, sizeof( visitados ) );
            busca( documento, j, j, visitados);

            if( visitados[j] == 1 ){
                cout << "SIM\n";
                flag = false;
                break;
            }
        }

        if( flag ){
            cout << "NAO\n";
        }
    }
}
