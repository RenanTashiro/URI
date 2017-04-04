#include <iostream>
using namespace std;

int main()
{
    int x, z, n = 1, t;
    cin >> x >> z;

        while(z <= x){
        cin >> z;
        }
        t = x++;
    while(x <= z){
        x += t;
        n += 1;
        t++;
    }
    cout << n << endl;
}
