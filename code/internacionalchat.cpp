#include <iostream>
using namespace std;

int main()
{
    int N, K, vlr = 0;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> K;
        string lingua[K];

        for(int k = 0; k < K; k++){
            cin >> lingua[k];
            if(lingua[0] != lingua[k])
                vlr = 1;
        }
            if(vlr == 1)
                cout << "ingles" << endl;
            else
                cout << lingua[0] << endl;
            vlr = 0;
    }
}
