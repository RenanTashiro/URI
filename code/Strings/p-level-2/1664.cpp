/*
Nome:      Bullshit Bingo
ID:        1664
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   1.023 Bytes
Submissao: 28/10/15 07:19:41
*/
#include <iostream>
#include <cassert>
#include <cctype>
#include <string>
#include <set>
using namespace std;

int gcd(int a, int b) {
	return b?gcd(b,a%b):a;
}

int main() {
	string line;
	set<string> words;
	int number_of_games = 0, numerator = 0;
	bool last_inserted = false;
	while(getline(cin,line)) {
		string w = "";
		assert(line.size()<=100);
		line += ".";
		for (int i=0; i<(int)line.size(); i++) {
			if (isalpha(line[i]))
				w += toupper(line[i]);
			else {
				if (w == "BULLSHIT") {
					number_of_games++;
					assert(words.size()>=4);
					assert(last_inserted);
					numerator += words.size();
					words.clear();
				}
				else if (w.size()>0) {
					assert(w.size()<=25);
					if (words.find(w) == words.end()) {
						words.insert(w);
						last_inserted = true;
					}
					else
						last_inserted = false;
				}
				w = "";
			}
		}
	}
	int t = gcd(numerator, number_of_games);
	cout << numerator/t << " / " << number_of_games/t << endl;
	return 0;
}