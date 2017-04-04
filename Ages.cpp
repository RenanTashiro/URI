#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x, n = 0, t = 0;
    float media;

    while(x > - 1){

    cin >> x;

        if(x > 0){
        t += x;
        n++;
        }
    }
    media = t / n;
    cout << setiosflags(ios::fixed) << setprecision(2) << media << endl;
}
