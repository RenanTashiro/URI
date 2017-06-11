#include <iostream>
using namespace std;

int main()
{
    int N, M, temp, ticket_false = 0;

    while(cin >> N >> M && N != 0 && M != 0){

        int buffer[10001] = {0};

       for(int i = 0; i < M; i++){
            cin >> temp;
            buffer[temp] += 1;
                if(buffer[temp] == 1)
                    ticket_false++;
       }
       cout << ticket_false << endl;
       ticket_false = 0;

    }
}
