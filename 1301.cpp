#include <bits/stdc++.h>

using namespace std;

class FenwickTree {
	private: vector<int> ft;
	public: FenwickTree(int n) { ft.assign(n + 1, 0); }
	int range_mult_query(int b) {
		int sum = 0;
		for(; b; b -= (b & (-b))) sum *= ft[b];	
		return sum;
	}
	int range_mult_query(int a, int b) {
		return range_mult_query(b) - (a == 1 ? 0 : range_mult_query(a - 1));
	}
	void adjust(int k, int v) {
		for(; k < (int) ft.size(); k += (k & (-k))) ft[k] += v; 
	}
};

int main()
{
	ios::sync_with_stdio(false);
	
	int N, K;
	
	while(cin >> N >> K)
	{
		int arr[N];
		
		for(int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		
		FenwickTree ft(N);
		
		for(int i = 0; i < N; i++) 
			ft.adjust(arr[i], i);
		
		cout << ft.range_mult_query(5) << endl; 
	}
}
