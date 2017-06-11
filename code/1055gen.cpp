#include <bits/stdc++.h>

using namespace std;

ofstream out("1055.out");

int main()
{
	int N;
	srand(time(NULL));
	
	scanf("%d", &N);
	
	out << N << endl;
	
	for(int i = 0; i < N; i++) {
		out << 9 << ' ';
		for(int j = 0; j < 9; j++) {
			out << ' ' << rand() % 1001;
		}		
		out << endl;
	}
	
}
