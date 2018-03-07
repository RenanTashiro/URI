/*
Nome:      Fila do Supermercado
ID:        2065
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.012s
Tamanho:   728 Bytes
Submissao: 23/05/16 22:48:05
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M, c;
	
	cin >> N >> M;
	
	int func[N], func_time[N];
	
	for(int i = 0; i < N; i++) {
		cin >> func[i];
		func_time[i] = 0;
	}
	
	queue<int> cliente;
	
	for(int i = 0; i < M; i++) {
		cin >> c;
		cliente.push(c);
	}
	
	int counter = 0;
	
	while(!cliente.empty()) {
		int mintime = INT_MAX;
		for(int i = 0; i < N; i++) {
			if(!cliente.empty() && func_time[i] == counter) {
				func_time[i] += func[i] * cliente.front();
				cliente.pop();
			}
			mintime = min(mintime, func_time[i]);
		}
		counter = mintime;
	}
	
	for(int i = 0; i < N; i++)
		counter = max(counter, func_time[i]);
	
	cout << counter << endl;
}

