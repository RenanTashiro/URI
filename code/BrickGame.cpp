#include <iostream>
using namespace std;

int main()
{
    int T, N, team[10], aux;
    cin >> T;

    for(int i = 0; i < T; i++){

     cin >> N;

     for(int x = 0; x < N; x++){
        cin >> team[x];
     }
     aux = N / 2;
        cout << "Case " << i + 1 << ": " << team[aux]<< endl;
    }
}
