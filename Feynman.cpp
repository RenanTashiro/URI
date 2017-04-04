#include <iostream>
using namespace std;

int main()
{
    int N, mais, total, more;

    while(cin >> N){

    if(N == 0)
        break;

    total = 1;
    mais = 4;
    more = 5;

    for(int i = 1; i < N; i++){
        total += mais;
        mais += more;
        more += 2;
    }
    cout << total << endl;
    }
}
