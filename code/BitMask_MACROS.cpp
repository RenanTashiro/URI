#include <bits/stdc++.h>

using namespace std;

#define mul(n) <<= n // multiply by 2^n
#define div(n) >>= n // divide by 2^n
#define turn(n) |= (1 << n) // Set the nth bit
#define on(mask, n) = mask & (1 << n) // Check if the nth bit is on
#define clear(n) &= !(1 << n) // Clear the nth bit
#define flip(n) ^= (1 << n) // Flip the nth bit
#define firtOn(n) = (n & -(n))  // Get the first bit that is on
#define turnAll(n) = (1 << n) - 1 // turn the nth first bits

int main()
{
	ios::sync_with_stdio(false);
	
	int mask = INT_MAX;
	
	mask turn(6);
	mask div(5);

	cout << mask << ' ' << ans << endl;
}
