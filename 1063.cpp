#include <bits/stdc++.h>

using namespace std;

ofstream out("1063.out");

int main()
{	
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		vector<char> A(N), B(N);
		
		for(int i = 0; i < N; i++) {
			scanf(" %c", &A[i]);
		}
		
		for(int i = 0; i < N; i++) {
			scanf(" %c", &B[i]);
		}	
		
		stack<char> Stk;
		int idx_A = 0, idx_B = 0;
		
		Stk.push(A[idx_A++]);
		printf("%c", 'I'); out << 'I';
		
		while(1) {
			if(!Stk.empty() && Stk.top() == B[idx_B]) {
				Stk.pop(); idx_B++;
				printf("%c", 'R'); out << 'R';
			} 
			else {
				if(idx_A < N) {
					Stk.push(A[idx_A++]);
					printf("%c", 'I'); out << 'I';
				}
				else {
					break;				
				}
			}
		}
		
		if(!Stk.empty()) {
			printf(" %s", "Impossible"); out << ' ' << "Impossible";
		}

		out << endl;
		puts("");
	}
}

