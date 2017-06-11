#include <iostream>
#include <map>
using namespace std;

int main()
{
    int number;

    while( cin >> number && number != 0 ){

        int counter = 0;
        map<int,int> different_numbers;

        different_numbers[number] = 1;
        number = ( number * number ) % 1000000 / 100;

        while( different_numbers[number] == 0  ){
            different_numbers[number] = 1;
            number = ( number * number ) % 1000000 / 100;
            counter++;
        }

        cout << counter + 1 << endl;
    }
}
