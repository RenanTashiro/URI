#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int N, len = 0;
    string palavra[50];

    while(cin >> N && N != 0){

        for(int i = 0; i < N; i++){

            cin >> palavra[i];

            if(len < palavra[i].length())
                len = palavra[i].length();

                cout << len << endl;

        }
        for(int i = 0; i < N; i++){

            cout << setiosflags(ios::fixed) << setprecision(len) << palavra[i] << endl;
        }
    }
}
