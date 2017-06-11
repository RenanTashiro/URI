#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float  a, b, c, d , e, f, media, valor = 0, num;
    cin >> a >> b >> c >> d >> e >> f;
    num = (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0) + (f > 0);
    cout << num << " valores positivos" << endl;
    if(a > 0){
        valor += a;
    }
    if(b > 0){
        valor += b;
    }
    if(c > 0){
        valor += c;
    }
    if(d > 0){
        valor += d;
    }
    if(e > 0){
        valor += e;
    }
    if(f > 0){
        valor += f;
    }
    media = valor / num;
    cout << setiosflags(ios::fixed) << setprecision(1) << media << endl;
}
