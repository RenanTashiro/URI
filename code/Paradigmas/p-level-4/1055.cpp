/*
Nome:      Soma Permutada Elegante
ID:        1055
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,13 KB
Submissao: 10/01/16 16:13:38
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);

	for(int TC = 1; TC <= T; TC++)
	{
		int N;
		
		scanf("%d", &N);
		
		vector<int> arr(N);
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
		}
		
		sort(arr.begin(), arr.end());				

		int begin = 0, end = N-1;
		
		deque<int> elegant, relegant;		
		elegant.push_back(arr[end--]);

		while(begin <= end) {
			elegant.push_front(arr[begin++]);
			if(begin < end) elegant.push_back(arr[begin++]);
			if(begin < end)	elegant.push_front(arr[end--]);
			if(begin < end) elegant.push_back(arr[end--]);
		}
		
		begin = 0; end = N-1;
		relegant.push_back(arr[begin++]);
		
		while(begin <= end) {
			relegant.push_back(arr[end--]);
			if(begin < end) relegant.push_front(arr[end--]);
			if(begin < end)	relegant.push_back(arr[begin++]);
			if(begin < end) relegant.push_front(arr[begin++]);
		}

		int ans = 0, rans = 0;
		
		for(int i = 1; i < N; i++) {
			ans += abs(elegant[i-1] - elegant[i]);			
			rans += abs(relegant[i-1] - relegant[i]);			
		}
		
		printf("Case %d: %d\n", TC, max(ans, rans));
	}
}

