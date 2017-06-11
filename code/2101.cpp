#include <bits/stdc++.h>

#define MOD 1713371337

using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	long long int D1, D2;
	
	while(scanf("%lld%lld", &D1, &D2) && D1 != 0)
	{
		int gcd_ = gcd(D1, D2);
		
		printf("%lld\n", ((D1 * D2) / gcd_) % MOD);
	}
}
