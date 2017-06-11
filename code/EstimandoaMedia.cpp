#include <iostream>
using namespace std;

int main()
{
    int T, N, P, cont = 0, temp = -1, est = 0;
    bool flag = false;

    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> N;

        for(int l = 0; l < N; l++){

            cin >> P;

            if(temp < P){
                temp = P;
                cont = 0;
                flag = true;
            }
            if(temp == P)
                ++cont;
            else if(flag){
                est = cont;
                flag = false;
                cont = 0;
            }
        }
            if(est < cont)
                cout << "Caso #"<<i+1<<": " << cont << endl;
            else
                cout << "Caso #"<<i+1<<": " << est << endl;

        temp = -1;
        cont = est = 0;
    }
}
