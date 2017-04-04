#include <bits/stdc++.h>

using namespace std;

typedef pair<long long,long long> ii;
typedef vector<ii> vii;

void fill_queue(priority_queue<ii, vii, greater<ii>> &pq, vii &proc, long long time, long long &idx)
{
	for(; idx < (long long)proc.size() && proc[idx].first <= time; idx++) {
		pq.push(ii(proc[idx].second, proc[idx].first));
	}
}

ofstream out("1633.out");

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		vii proc(N);
		
		for(int i = 0; i < N; i++) {
			scanf("%lld%lld", &proc[i].first, &proc[i].second);
		}
		
		sort(proc.begin(), proc.end());
		
		priority_queue<ii, vii, greater<ii>> pq;
		long long time = 1, idle_time = 0;
		long long idx = 0;
		
		if(proc[idx].first > time) time = proc[idx].first;
		fill_queue(pq, proc, time, idx);
		
		while(!pq.empty()) {
			ii u = pq.top(); pq.pop();
			//cout << u.first << ' ' << u.second << '|' << time << endl;
			idle_time += time - u.second;
			time += u.first;
			if(pq.empty() && idx < (int)proc.size()) {
				if(proc[idx].first > time) time = proc[idx].first;
			}
			fill_queue(pq, proc, time, idx);
		}		
		
		printf("%lld\n", idle_time);
		out << idle_time << endl;
	}
}

