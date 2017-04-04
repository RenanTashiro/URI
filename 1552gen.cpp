#include <bits/stdc++.h>

std::ofstream out("1552.out");

int main()
{
	int N = 5;
	out << N << std::endl;
	srand(time(NULL));
	while(N--) {
		out << 500 << std::endl;
		for(int i = 0; i < 500; i++) {
			out << rand() % 10001 << ' ' << rand() % 10001 << std::endl;
		}
	}
}
