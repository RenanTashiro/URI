#include <iostream>
using namespace std;

int Sort(int &A, int &B, int &C, int &D){

int temp;

    if(A > B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A > C){
        temp = A;
        A = C;
        C= temp;
    }
    if(A > D){
        temp = A;
        A = C;
        C = temp;
    }
    if(B < C){
        temp = B;
        B = C;
        C= temp;
    }
    if(B < D){
        temp = B;
        B = C;
        C = temp;
    }

}

int main()
{
    int N, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;

        Sort(Ax, Bx, Cx, Dx);
        Sort(Ay, By, Cy, Dy);

        if(Ax < Rx && Rx < Bx && Ay < Ry && Ry < By)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
