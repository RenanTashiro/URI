#include <iostream>
#include <string>
using namespace std;

int BinToDec(string bin, int len){

int dec = 0, mult = 1;

    for(int i = len - 1; i >= 0; --i){
        if(bin[i] == '1')
            dec += mult;
    mult *= 2;
    }
    return dec;

}

int main()
{
    int N, D1, D2;
    cin >> N;
    string S1, S2;

    for(int i = 0; i < N; i++){

        cin >> S1 >> S2;

        D1 = BinToDec(S1, S1.size());
        D2 = BinToDec(S2, S2.size());

        int a, b, r;

        if( D1 > D2 ){
            a = D1;
            b = D2;
        }
        else{
            a = D2;
            b = D1;
        }

        while( b != 0 ){
            r = a % b;
            a = b;
            b = r;
        }

            if( a != 1)
                cout << "Pair #"<< i + 1 <<": All you need is love!" << endl;
            else
                cout << "Pair #"<< i + 1 <<": Love is not all you need!" << endl;
    }
}
