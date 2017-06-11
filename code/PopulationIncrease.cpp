#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int T[n], PA, PB, t;
    double G1, G2;

    for(int i = 0; i < n; i++){

    t = 0;

    cin >> PA >> PB >> G1 >> G2;

    if(G1 < 1 || G1 == G2 && PA == PB){
    t = 101;
    }
    else{
        while(PA < PB + 1){
        PA *= G1 / 100 + 1;
        PB *= G2 / 100 + 1;
        t++;
        if(t > 100)
        break;
        }}

    if(t > 100){
        cout << "Mais de 1 seculo." << endl;
    }
    else
        cout << t << " anos." << endl;
    }
}

