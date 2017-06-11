#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    int N, M, aux;

    cin >> N >> M;

    map<int,int> casas;

    for( int i = 0; i < N; i++ ){
        cin >> aux;
        casas[aux] = i + 1;
    }

    int previous_position = 1, total_dist = 0;

    for( int i = 0; i < M; i++ ){
        cin >> aux;
        total_dist += fabs( casas[aux] - previous_position );
        previous_position = casas[aux];
    }

    cout << total_dist << endl;
}
