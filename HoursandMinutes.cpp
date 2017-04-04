#include <iostream>
using namespace std;

int main()
{
    int N;

    while(cin >> N){

        if(N % 6 == 0){
            cout << "Y" << endl;
            continue;
        }
            cout << "N" << endl;
    }
}
