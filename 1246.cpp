#include <bits/stdc++.h>

using namespace std;

struct Range {
	int begin, end;
	Range(int b, int e) : begin(b), end(e) {}
	int length() { return end - begin; }
};

int main()
{
	int C, N;
	
	while(scanf("%d%d", &C, &N) != EOF)
	{
		int plate, width, profit = 0;
		char cmd;
		map<string,Range> place;
		for(int i = 0; i < N; i++) {
			scanf(" %c%d%d", &cmd, &plate, &width);
			if(cmd == 'C') {
				if(!place.empty()) {
					
				}
			}
			else {
				
			}
		}	
		
		printf("%d\n", profit);
	}
}
