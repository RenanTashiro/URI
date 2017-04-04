#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Xf, Yf, Xi, Yi, Vi, R1, R2;
	
	while(scanf("%d%d%d%d%d%d%d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF)
	{
		if(hypot((double)Xf - Xi, (double)Yf - Yi) + Vi*1.5 <= R1 + R2)
			puts("Y");
		else
			puts("N");
	}
}
