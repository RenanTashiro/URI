#include <iostream>
using namespace std;

int insercion( int *arry, int len )
{
    int i, j, tmp, counter = 0;

    for( i = 1; i < len; i++ ){
        j = i;
        tmp = arry[j];
        while( arry[j-1] > tmp && j > 0 ){
            arry[j] = arry[j-1];
            counter++;
            j--;
        }
        arry[j] = tmp;
    }

    return counter;
}

int main()
{
    int N, L;

    cin >> N;

    for( int i = 0; i < N; i++ ){

        cin >> L;

        int carriage[L];

        for( int j = 0; j < L; j++ ){
            cin >> carriage[j];
        }

        cout << "Optimal train swapping takes "<< insercion( carriage, L ) <<" swaps.\n";
    }

    return 0;
}
