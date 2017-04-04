#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    cout << "Ho";
    if(N > 10){
        for(int i = 0; i < N / 10; i++)
            cout << " Ho Ho Ho Ho Ho Ho Ho Ho Ho Ho";
     N = N % 10;
    }

    if(N == 2)
        cout << " Ho";

    else if(N % 2 == 0 && N > 3){
        for(int i = 1; i < N-1; i += 2)
            cout << " Ho Ho";

         cout << " Ho";
    }
    else if(N > 99){
        for(int i = 1; i < N - 1; i += 4)
            cout << i+1 << i+2 << i+3 << i+4;

        cout << " Ho";
    }

    else{
        for(int i = 1; i < N - 1; i += 2)
            cout << " Ho Ho";
    }
        cout << "!" << endl;
}
