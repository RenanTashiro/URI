#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int X, X2, Y, Y2;

   while(cin >> X >> Y >> X2 >> Y2){

    if(X == 0 && Y == 0 && X2 == 0 && Y2 == 0)
        break;
    if(X == X2 && Y == Y2){
        cout << 0 << endl;
        continue;
    }
    else if(X == X2 || Y == Y2 || fabs(X2 - X) == fabs(Y2 - Y)){
        cout << 1 << endl;
        continue;
    }
    else
        cout << 2 << endl;
   }
}

