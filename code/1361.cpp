#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N;
		
		scanf("%d", &N);
		
		vector<ii> F(N);
		int value;
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &value);
			if(value < 0) {
				F[i] = ii(-value,0);
			} else {
				F[i] = ii(value, 1);
			}
		}
		
		sort(F.begin(), F.end());
		
		int red = -1, rcounter = 1, rprev = 0;
		
		for(int i = 0; i < N; i++) {
			if(F[i].second == 0) {
				red = i;
				break;
			}
		}
		
		if(red != -1) {
			for(int i = red+1; i < N; i++) {
				if(rprev != F[i].second) {
					rprev = F[i].second;
					rcounter++;	
				}
			}
		}
		
		int blue = -1, bcounter = 1, bprev = 1;
				
		for(int i = 0; i < N; i++) {
			if(F[i].second == 1) {
				blue = i;
				break;
			}
		}
		
		if(blue != -1) {
			for(int i = blue+1; i < N; i++) {
				if(F[i].second != bprev) {
					bprev = F[i].second;
					bcounter++;
				}
			}
		}	
		
		printf("%d\n", max(rcounter, bcounter));
	}
}
