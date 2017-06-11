#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define root 1.73205080757

double snowflake(double side, unsigned int long long mult, double area, double comp){

    comp = area;
    area += (side * side) * root / 4 * mult;
        cout << mult << ' ' << side << ' ' << area << endl;

        if(area != comp)
            snowflake(side / 3, mult * 3, area, comp);
}

int main()
{
    double side, area;

    while(cin >> side){

        area = snowflake(side, 1, 0.0, 0.0);

        cout << setiosflags(ios::fixed) << setprecision(2) << area << endl;
    }
}
