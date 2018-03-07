/*
Nome:      Cuarenta e Dois
ID:        1590
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   658 Bytes
Submissao: 28/12/15 17:26:26
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N, K;
		
		cin >> N >> K;

		vector<int> arr(N);
		
		for(int i = 0; i < N; i++) {
			cin >> arr[i];
		}
	
		vector<int> new_set;
		
		for(int i = 29; i >= 0; i--) {
			for(int j = 0; j < (int) arr.size(); j++) {
				if((arr[j] & (1 << i)) > 0) {					
					new_set.push_back(arr[j]);
				}
			}
			if((int) new_set.size() >= K) {
				arr = new_set;
			}
			new_set.clear();
		}
		
		int ans = INT_MAX;
		
		for(auto a : arr) {
			ans &= a;
		}
		
		cout << ans << endl;
	}
}
