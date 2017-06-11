#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float s = 3, t, d = 2;

    while(s < 40){
        t += s / d;
        d *= 2;
        s +=2;
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << t + 1 << endl;
}
