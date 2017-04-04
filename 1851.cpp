#include <bits/stdc++.h>

using namespace std;

typedef pair<long long,long long> ii;

int main()
{
	long long T, F, ans = 0, day = 0, train_day = 0;
	long long counter = 0;
	priority_queue<pair<double,pair<long long,ii>>> pq;
	
	while(scanf("%lld%lld", &T, &F) != EOF) {
		pq.push({-1.0*T/F,{day,{T, F}}});
		if(!counter) {
			pair<double,pair<int,ii>> u = pq.top(); pq.pop();
			ans += (train_day - u.second.first) * u.second.second.second;
			train_day += u.second.second.first;
			counter += u.second.second.first;
		} 
		counter--;
		day++;
	}

	while(!pq.empty()) {
		pair<double,pair<int,ii>> u = pq.top(); pq.pop();
		ans += (train_day - u.second.first) * u.second.second.second;
		train_day += u.second.second.first;
	}
	
	printf("%lld\n", ans);
}
/*
Inicio Fim Cost Queue
    4    3 0000  NLL   
    3    2 0000 {3,4}
    2    1 0000 {1,1000}{3,4}
    1    0 0000 {1,1000}{3,4}{2,2}
    1    0 2000 {3,4}{2,2}{5,6} 
    3    2 2016 {2,2}{5,6} 
    2    1 2016 {2,2}{5,6} 
    1    0 2016 {2,2}{5,6} 
    5    4 2036 {2,2}
    4    3 2036 {2,2}
    3    2 2036 {2,2}
    1    0 2036 {2,2}
    2    1 2058  NLL
    1    0 2058  NLL
    
3 1
1 3
4 1
1 4
5 1
1 5
6 1
1 6
7 1
1 7
8 1
1 8
9 1
1 9      
*/
