/*
Nome:      Dividindo os Trabalhos I
ID:        2715
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.120s
Tamanho:   526 Bytes
Submissao: 08/01/18 11:43:45
*/
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
	int N;
	
	while(cin >> N)
	{
		vector<long long> el(N), prefSum(N);
		long long sum = 0;
		
		for(int i = 0; i < N; i++) {
			scanf("%lld", &el[i]);
			sum += el[i];
		}
		
		prefSum[0] = el[0];
		
		for(int i = 1; i < N; i++) {
			prefSum[i] = prefSum[i-1] + el[i];
		}
		
		long long ans = LONG_LONG_MAX;
		
		for(long long v : prefSum) {
			ans = min(ans, abs(sum - v - v));
		}
		
		cout << ans << endl;
	}
}
