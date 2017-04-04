#include <iostream>
using namespace std;

int main()
{
    int H, highest;

    while(cin >> H && H != 0){

    highest = H;

        while(H != 1){

            if(H % 2 == 0)
                H /= 2;
            else
                H = H * 3 + 1;

        if(H > highest)
            highest = H;
        }
        cout << highest << endl;
        highest = 0;
    }
}
