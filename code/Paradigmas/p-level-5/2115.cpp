/*
Nome:      Produção em Ecaterimburgo
ID:        2115
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.232s
Tamanho:   856 Bytes
Submissao: 18/08/17 17:37:25
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		vector<ii> task(N);
		
		for(int i = 0; i < N; i++)
			scanf("%d%d", &task[i].first, &task[i].second);
			
		sort(task.begin(), task.end());
		
		priority_queue<ii> next;
		int act_time = task[0].first, index = 1;
		
		next.push(ii(-task[0].second, task[0].first));
		
		while(!next.empty())
		{
			ii t = next.top();
			next.pop();
			
			act_time = max(act_time, t.second);
			act_time = act_time - t.first; 
			
			while(index < N && task[index].first <= act_time)
				next.push(ii(-task[index].second, task[index].first)), index++;
				
			if(index < N && next.empty())
				next.push(ii(-task[index].second, task[index].first)), index++;
		}
		
		printf("%d\n", act_time);
	}
}
