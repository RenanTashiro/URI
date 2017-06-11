#include <iostream>
#include <sstream>
#include <stdio.h>
#include <iomanip>
#include <ctype.h>
using namespace std;

int main()
{
    int N, day = 1, total_fruits = 0, total_total = 0;
    float price, total_price = 0.0;
    cin >> N;
    string fruits, foo;

    for(int i = 0; i < N; i++){

        cin >> price;

        getchar();
        stringstream frutas;
        getline(cin,fruits);
        frutas << fruits;
        while(frutas >> foo){
            total_fruits += 1;
        }

        total_total += total_fruits;
        cout << "day " << day << ": " << total_fruits << " kg" << endl;
        total_fruits = 0;

        total_price += price;
        day++;
    }

    cout << setiosflags(ios::fixed) <<setprecision(2) << (float) total_total / (day - 1) << " kg by day" << endl;
    cout << setiosflags(ios::fixed) <<setprecision(2) << "R$ " << (float) total_price / (day - 1) << " by day" << endl;
}
