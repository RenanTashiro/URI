#include <bits/stdc++.h>

using namespace std;

ofstream out("1633.in");

int main()
{
	int T;
	srand(time(NULL));;
	
	scanf("%d", &T) ;
	
	for(int i = 0 ; i < T; i++) {
		cout << "creating...\n";
		int N = 100; 
		out << N << endl; N--;
		out << 1 << ' ' << 1 << endl;
		while(N--) {
			out << rand() % 1000 + 1<< ' ' << rand() % 1000 + 1<< endl;
		}
	}
}
