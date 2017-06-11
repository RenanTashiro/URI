#include <iostream>
using namespace std;

int main()
{
    int X[10];

    for(int i = 0; i < 10; i++){

        cin >> X[i];

        if(X[i] == 0 || X[i] < 0)
            cout << "X[" << i << "] = " << 1 << endl;
        else
            cout << "X[" << i << "] = " << X[i] << endl;
    }

}
