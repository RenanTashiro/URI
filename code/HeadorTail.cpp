#include <iostream>
using namespace std;

int main()
{
    int N, R, Mary, John;

    while(N  != 0){

    cin >> N;

    if(N == 0)
        break;

    Mary = 0;
    John = 0;

    for(int i = 0; i < N; i++){
        cin >> R;
        if(R == 0)
            Mary++;
        else
            John++;
    }
    cout << "Mary won " << Mary << " times and John won " << John << " times" << endl;
    }

}
