#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, space = 0, star = 0, index;

    while(cin >> N){

    index = N / 2 + 1;

        for(int i = 1; i <= N; i += 2){
            cout << setw(index - space) << '*';
            for(int j = 0; j < star; j++)
                cout << "**";

            cout << endl;
            space++;
            star++;
        }
        cout << setw(index) << '*' << endl << setw(index+1) << "***" << endl << endl;;
        space = star = 0;
    }
}
