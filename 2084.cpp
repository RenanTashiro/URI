#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int count[N], max_votes = 0, total_votes = 0;
	
	for(int i = 0; i < N; i++) {
		scanf("%d", &count[i]);
		max_votes = max(count[i], max_votes);
		total_votes += count[i];
	}

	bool flag = true;
	
	if(max_votes >= ceil(total_votes * .45)) {
		puts("1");
	} else if(max_votes >= ceil(total_votes * .40)) {
		for(int i = 0; i < N; i++) {
			if(max_votes != count[i] && 10 > ceil((100*max_votes/total_votes - 100*count[i]/total_votes))) {
				flag = false;
				break;
			}			
		}
		if(flag) {
			puts("1");
		}
	} else {
		flag = false;
	}
	
	if(!flag) {
		puts("2");
	}
}
