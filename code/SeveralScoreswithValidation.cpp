#include <iostream>
#include <iomanip>
using namespace std;

int media(void){
    double a, b, media, bit;
    cin >> a;
    while(a < 0|| a > 10){
        cout << "nota invalida" << endl;
        cin >> a;
    }
    cin >> b;
    while(b < 0 || b > 10){
        cout << "nota invalida" << endl;
        cin >> b;
    }
    media = (a + b) / 2;
    cout << setiosflags(ios::fixed) << setprecision(2) << "media = " << media << endl;
}
void novocalculo(void){
    int bit;
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> bit;
    if(bit == 2){
        return;
    }
    else if(bit == 1){
    media();
    novocalculo();
    }
    else if(bit != 1 || bit != 2){
    novocalculo();
    }

}
int main()
{
    media();
    novocalculo();

}


