#include <bits/stdc++.h>

using namespace std;

int ans = 0;

long long consec_seq_util(int arr[], int n, int k, vector<vector<long long>> &dp)
{
	if(k == 1) {
		return 1;
	}
	long long ans = 0;
	for(int j = 1; j < n; j++) {
		if(arr[0] < arr[j]) {		
			if(dp[n-j][k-1] == -1) {
				dp[n-j][k-1] = consec_seq_util(&arr[j], n-j, k-1, dp);
			}
			ans += dp[n-j][k-1];
		}
	}
	return ans;
}

long long consec_seq(int arr[], int n, int k) 
{
	vector<vector<long long>> dp(n+1, vector<long long>(k+1,-1));
	long long ans = 0;
	for(int i = 0; i < n-k+1; i++) {
		ans += consec_seq_util(&arr[i], n-i, k, dp);
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N, K;

	while(cin >> N >> K && N != 0)
	{
		int arr[N];
	
		for(int i = 0; i < N; i++) {
			cin >> arr[i];
		}		
		
		cout << consec_seq(arr, N, K) << endl;
	}
}
