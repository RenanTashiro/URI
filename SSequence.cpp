#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float s, total = 0;

    for(s = 1; s < 100 + 1; s++){
    total += 1 / s;
}
    cout << setiosflags(ios::fixed) << setprecision(2) << total << endl;
}
