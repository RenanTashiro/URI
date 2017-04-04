#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    for(int d = 1; d < n + 1; d++){
        if(n % d == 0)
        cout << d << endl;
    }
}
