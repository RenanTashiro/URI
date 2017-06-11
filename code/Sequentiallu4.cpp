#include <iostream>
using namespace std;

int main ()
{
    double i = 0, j = 1, aux;

    cout << "I=" << i << " J=" << j << endl;

    while(i < 1.8){

            cout << "I=" << i << " J=" << j + 1 << endl;
            cout << "I=" << i << " J=" << j + 2 << endl;
            cout << "I=" << (i+=0.2) << " J=" << (j+=0.2) << endl;
    }

            cout << "I=" << 2 << " J=" << 4 << endl;
            cout << "I=" << 2 << " J=" << 5 << endl;
}




