#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int fat(int N) {
	int ans = 1;
	for(int i = 2; i <= N; i++) {
		ans *= i;
	}
	return ans;
}

int comb(int a, int b) {
	return fat(a) / fat(b) * fat(a-b);
}

int total_comb(int boy, int girl)
{
	if(girl == 1) {
		return 1;
	}
	int ans = 0;
	for(int i = 1; i < boy-girl+1; i++) {
		for(int j = 0; j < girl; j++) {
			ans += total_comb(boy-i, girl-1);
		}
	}
	    
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int B, G;
	
	while(cin >> B >> G && B != 0) {
		cout << total_comb(B, G) << endl;
	}
}

