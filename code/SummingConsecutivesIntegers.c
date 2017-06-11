#include <iostream>
using namespace std;

int main (){

    int A, N, i = 1, total = 0;
    cin >> A >> N;

    if(N == 0 || N < 0){
    cin >> N;
    }
    while(i < N){
        total += A;
        A++;
        i++;
    }

}
