#include <bits/stdc++.h>

#define MAX 10000

using namespace std;

typedef pair<int,int> ii;

int reverse_integer(int n)
{
	int rn = 0;
	while(n) {
		rn *= 10;
		rn += n % 10;
		n /= 10;
	}
	return rn;
}

int BFS(int A, int B) 
{
	queue<ii> Q; // (Number, Level);
	int level = -1;
	bool visited[MAX] = {false};	
	Q.push(ii(A,0)); 	 
	visited[A] = true;
	while(!Q.empty()) 
	{
		ii u = Q.front(); Q.pop();	
		if(u.first == B) {
			level = u.second;
			break;
		}		
		int child = u.first+1, rchild = reverse_integer(u.first);		
		if(!visited[child]) {
			Q.push(ii(child, u.second+1));		
			visited[child] = true;
		}
		if(!visited[rchild]) {
			Q.push(ii(rchild, u.second+1));
			visited[rchild] = true;
		}		
	}
	
	return level;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int A, B;
		
		cin >> A >> B;
		
		cout << BFS(A, B) << endl;
	}
}
