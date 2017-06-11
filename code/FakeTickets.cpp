#include <iostream>
using namespace std;

int main()
{
    int N, M, temp, ticket_false = 0;

    while(cin >> N >> M && N != 0 && M != 0){

        int buffer[N+1];

        for(int i = 0; i < M; i++){

            cin >> temp;
            buffer[temp] += 1;
        }

        for(int i = 0; i < N; i++){
            if(buffer[i] > 1)
                ticket_false += buffer[i] - 1;

        cout << ticket_false << endl;
        }

        cout << ticket_false << endl;
        ticket_false = 0;
    }
}
