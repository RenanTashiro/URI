#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0) 
	{
		unordered_set<string> archive, words;
		string word[N];	
		bool flag = true;	
		
		for(int i = 0; i < N; i++) {
			cin >> word[i];
			
			if(flag) {
				if(words.find(word[i]) != words.end()) 
					flag = false;			
			}
			
			if(flag) {
				words.insert(word[i]);
				for(int j = 1; j < (int)word[i].size(); j++) {
					archive.insert(word[i].substr(0, j));
				}
			}
		}		
		
		if(flag) {
			for(int i = 0; i < N; i++) {
				if(archive.find(word[i]) != archive.end()) {
					flag = false;		
					break;
				}
			}
		}
		
		if(flag)		 
			puts("Conjunto Bom");
		else
			puts("Conjunto Ruim");
	}
}
