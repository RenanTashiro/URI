#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sections, team_number, hour, second, minute, cond = 0;
    double total_minute = 0.0, relay;
    char dot_dot;
    cin >> sections >> relay;

    while(cin >> team_number){

        for(int i = 0; i < sections; i++){

        cin >> hour >> dot_dot >> minute >> dot_dot >> second;

        total_minute += minute;

        if(hour > 0)
            total_minute += hour*60;

        if(second > 0)
            total_minute += double(second)/60;

        }

        total_minute /= relay;
        minute = total_minute;
        second = (total_minute-minute)*60;

        cout << setw(3) << team_number << ": " << minute << ':' << second << " min/km" << endl;
    }
}
