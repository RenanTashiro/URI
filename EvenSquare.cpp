#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if(N % 2 == 0){
    for(int N; N = 2; N = N - 2){
        cout << N << "^" << N << " = " << N * N;
    }
    }
    if(N % 2 == 1){
    for(int N = N -1; N = 2; N = N -2){
        cout << N << "^" << N << " = " << N * N;
    }
    }
}
