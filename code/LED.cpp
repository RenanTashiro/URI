#include <iostream>
using namespace std;

int main()
{
    int N;
    char LED[105];
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> LED;

        int V = 0;

        for(int i = 0; LED[i] != '\0'; i++){
            switch(LED[i]){
                case '1':
                    V += 2; break;
                case '2':
                    V += 5; break;
                case '3':
                    V += 5; break;
                case '4':
                    V += 4; break;
                case '5':
                    V += 5; break;
                case '6':
                    V += 6; break;
                case '7':
                    V += 3; break;
                case '8':
                    V += 7; break;
                case '9':
                    V += 6; break;
                case '0':
                    V += 6; break;
            }
        }
        cout << V << " leds" << endl;
    }
}

