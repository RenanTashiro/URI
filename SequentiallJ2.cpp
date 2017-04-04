#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 7;

    cout << "I=" << 1 << " J=" << 7 << endl;

        while(i < 9){
            j = j - 1;
            i = i;
        cout << "I=" << i << " J=" << j << endl;
        if(j <= 5){
            j = 7;
            i += 2;
        cout << "I=" << i << " J=" << j << endl;
        }
        if(i == 9 && j != 5){
            i = i;
            j = j -1;
        }
        }
        cout << "I=" << 9 << " J=" << 6 << endl;
        cout << "I=" << 9 << " J=" << 5 << endl;
}
