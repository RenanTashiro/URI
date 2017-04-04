#include <iostream>
using namespace std;

int main()
{
    int n, races = 0;

    while(cin >> n && n != 0){

        while(n != 1){
        if(n % 3 == 0 || n == 1)
            n = (n / 3);
        else
            n = n / 3 + 1;

        races += n;
        }
        cout << races << endl;
        races = 0;
    }
}
