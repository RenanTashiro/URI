#include <bits/stdc++.h>

using namespace std;

/*
C: meters
V: speed in c/s
T: Khan`s arrival time
*/

// 100 3 5 1 0
// 100 3 5 0 0
// 999 396 198 13 977 *

int main()
{
    int C, Va, Vb, T, D;

    printf("%d\n", 252140%99900);

    scanf("%d%d%d%d%d", &C, &Va, &Vb, &T, &D);

    C *= 100;
    D *= 100;
    T *= 60;

    printf("(%d+%d*%d)mod%d\n", D, Va, T, C);

    int Da = (D+Va*T)%C, Db = (D+Vb*T)%C;
    int Ta = ((Da == 0? 2*Da : C) - Da)/Va, Tb = ((Db == 0 ? 2*Db : C) - Db)/Vb;

    printf("TOT:%d A:%d B:%d\n", C, (D+Va*T)%C, Db);
    printf("TOT:%d A:%d B:%d\n", C, Ta, Tb);
}
