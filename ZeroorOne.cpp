#include <iostream>
using namespace std;

int main()
{
    int A, B , C;

    while(cin >> A >> B >> C){

    if(A == B && A != C)
    cout << 'C' << endl;
    else if(A == C && A != B)
    cout << 'B' << endl;
    else if(B == C && B != A)
    cout << 'A' << endl;
    else
    cout << "*" << endl;
    }
}
