/*
Nome:      Eu Posso Adivinhar a Estrutura de Dados!
ID:        1340
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   925 Bytes
Submissao: 03/01/16 10:04:53
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int N;
	
	while(cin >> N)
	{
		int cmd, value;
		int stk = 1, q = 1, pq = 1;
		
		stack<int> Stk;
		queue<int> Q;
		priority_queue<int> PQ;		
		
		for(int i = 0; i < N; i++) {
			cin >> cmd >> value;
			if(cmd == 1) {
				Stk.push(value);
				Q.push(value);
				PQ.push(value);
			} else {
				if(stk) {
					if(Stk.top() != value) 
						stk = 0;
					Stk.pop();
				}
				if(q) {
					if(Q.front() != value) 
						q = 0;
					Q.pop();
				}
				if(pq) {
					if(PQ.top() != value) 
						pq = 0;
					PQ.pop();
				}
			}
		}
		
		if(stk + q + pq > 1) {
			cout << "not sure\n";
		}
		else if(stk + q + pq == 0) {
			cout << "impossible\n";
		} else {
			if(stk)     cout << "stack\n";
			else if(q)  cout << "queue\n";
			else if(pq) cout << "priority queue\n";
		}
	}
}
