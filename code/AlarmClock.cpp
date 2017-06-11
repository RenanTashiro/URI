#include <iostream>
using namespace std;

int main()
{
    int H1, M1, H2, M2, minutos;

    while(cin >> H1 >> M1 >> H2 >> M2){

        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
        break;

        if(H1 > H2){
            H1 = 24 - H1;
            if(M1 > 0)
                minutos = ((H2 + H1 - 1) * 60) + 60 - M1 + M2;
            else
                minutos = (H1 + H2) * 60 + M2;
        }
        else if(H1 == H2){
            if(M1 > M2)
                minutos = 1440 - (M1 - M2);
            else
                minutos = M2 - M1;
        }
        else{
            if(M1 > 0)
                minutos = ((H2 - H1 - 1) * 60) + 60 - M1 + M2;
            else
                minutos = (H2 - H1) * 60 + M2;
        }
        cout << minutos << endl;
    }
}
