#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    map<int,int> taxis;

    cin >> N;

    for( int i = 1; i <= N; i++ )
        cin >> taxis[i];

    return 0;
}

