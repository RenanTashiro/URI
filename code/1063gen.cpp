#include <bits/stdc++.h>

using namespace std;

ofstream out("1063.in");

int main()
{
	srand(time(NULL));	
	int TC;
	
	cin >> TC;
	
	while(TC--) {
		vector<char> vet;
		for(int i = 97; i < 123; i++) {
			vet.push_back((char)i);
		}		
		out << 26 << endl;
		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		shuffle(vet.begin(), vet.end(), default_random_engine(seed));
		for(int i = 0; i < 26; i++) {
			out << vet[i] << ' ';
		}
		out << endl;
		shuffle(vet.begin(), vet.end(), default_random_engine(seed));
		for(int i = 0; i < 26; i++) {
			out << vet[i] << ' ';
		}
		out << "\n";
	}
	
	out << '0';
	out.close();
}
