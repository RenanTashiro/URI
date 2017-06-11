#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int D, VF, VG;
    double time1, time2;

    while(cin >> D >> VF >> VG){

        time1 = (double) 12 / VF;
        time2 = (double) (sqrt(pow(D,2)+pow(12,2))) / VG;

   if(time1 >= time2)
        cout << "S" << endl;
   else
        cout << "N" << endl;

    }
}
