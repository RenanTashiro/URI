#include <bits/stdc++.h>

#define TAR 2

using namespace std;

int main()
{
	int N, occurrence[10] = {0}, prev = -1, counter = 0;
	
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++) {
		string str = to_string(i);
		for(int j = 0; j < (int)str.size(); j++) {
			occurrence[str[j]-'0']++;
		}
		if(prev != occurrence[TAR]) {
			counter++;
		}
		printf("%d=%d/%d\n", i, occurrence[TAR], prev != occurrence[TAR] ? 1 : 0);
		prev = occurrence[TAR];
	}
	
	/*for(int i = 0; i < 10; i++) {
		printf("%d=%d\n", i+1, occurrence[i]);
	}*/
}
/*
10=1
100=11
1000=192
10000=2893
100000=38894
1000000=488895
10000000=5888896
100000000=68888897
*/
