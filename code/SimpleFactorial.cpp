#include <iostream>
using namespace std;

int main()
{
    int n, f = 1, i = 0;
    cin >> n;

    while(i < n){
        f *= n;
        n -= 1;
    }
    cout << f << endl;
}
