#include <bits/stdc++.h>

using namespace std;

ofstream out("2002.out");

int main()
{
	int N = 6;
	srand(time(NULL));
	
	while(N--) {
		out << 100 << ' ' << 100 << endl;
		for(int i = 0; i < 100; i++) {
			for(int j = 0; j < 100; j++) {
				out << rand() << ' ';
			}
			out << endl;
		}
	}
}
