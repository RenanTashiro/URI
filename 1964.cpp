#include <bits/stdc++.h>

using namespace std;

/*
C: meters
V: speed in c/s
T: Khan`s arrival time
*/

int main()
{
    int C, Va, Vb, T, D;

    scanf("%d%d%d%d%d", &C, &Va, &Vb, &T, &D);

    C *= 100;
    D = (C-D)*100;
    T *= 60;

    // Initial position
    int Da = Va*T+D, Db = Vb*T+D;

    if(Da == 0 && Db == 0) {
        printf("%s\n", Va >= Vb ? "Ana" : "Bia");
    } else{
        Da %= C;
        Db %= C;

        float Ta = (float)((Da == 0 ? 0 : C)-Da)/Va*1.0, Tb = (float)((Db == 0 ? 0 : C)-Db)/Vb*1.0;

        printf("%s\n", Ta <= Tb ? "Ana" : "Bia");
    }
}
