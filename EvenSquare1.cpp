#include <iostream>
using namespace std;

int main()
{
    int N, aux;
    cin >> N;

    if(N % 2 == 0){
    for(int aux = 2; aux <= N; aux += 2){
        cout << aux << "^" << 2 << " = " << aux * aux << endl;
    }
    }
    else
    if(N % 2 == 1){
    for(int aux = 2; aux <= N; aux += 2){
        cout << aux << "^" << 2 << " = " << aux * aux << endl;
    }
    }
}
