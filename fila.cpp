#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N, pessoa_id;
    map<int,bool> fila;

    cin >> N;

    int static_queue[N];

    for( int i = 0; i < N; i++ ){
        cin >> pessoa_id;
        static_queue[i] = pessoa_id;
        fila[pessoa_id] = true;
    }

    int M;
    bool flag = false;

    cin >> M;

    for( int i = 0; i < M; i++ ){
        cin >> pessoa_id;
        fila[pessoa_id] = false;
    }

    for( int i = 0; i < N; i++ ){
        if( fila[static_queue[i]] == true ){
            if( flag )
                cout << ' ' << static_queue[i];
            else{
                cout << static_queue[i];
                flag = true;
            }
        }
    }

    cout << endl;
}

