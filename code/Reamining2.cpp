#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;

    while(i < 10000){
        i = i +1;

    if(i % n == 2){
        cout << i << endl;
    }

}
}
