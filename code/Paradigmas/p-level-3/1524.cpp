/*
Nome:      Fila do Bandejão
ID:        1524
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   655 Bytes
Submissao: 28/12/15 18:15:04
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int main()
{
	ios::sync_with_stdio(false);

	int N, K;
	
	while(cin >> N >> K)
	{ 
		vector<int> arr(N);
		arr[0] = 0;
		
		for(int i = 1; i < N; i++) {
			cin >> arr[i];
		}			
		
		priority_queue<ii> Q;
		Q.push(ii(0,-1));
		
		int sum = 0, minus = 0;
		
		for(int i = 1; i < N; i++) {
			int ans = arr[i] - arr[i-1];
			sum += ans;
			if(ans > -Q.top().first) {
				Q.push(ii(-ans,i));
				minus += ans;
				while((int) Q.size() > K-1) {
					minus -= -Q.top().first;
					Q.pop();
				} 
			}
		}
		
		cout << sum-minus << endl;
	}
}
