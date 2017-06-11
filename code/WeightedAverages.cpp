#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int v;
    cin >> v;
    float n[v], n1[v], n2[v], n3[v], soma;

    for(int i = 0; i < v; i++){
        cin >> n1[i] >> n2[i] >> n3[i];
    }
    for(int x = 0; x < v; x++){
        soma = (n1[x] * 2 + n2[x] * 3 + n3[x] * 5) / 10;
        cout << setiosflags(ios::fixed) << setprecision(1) << soma << endl;
    }
}
