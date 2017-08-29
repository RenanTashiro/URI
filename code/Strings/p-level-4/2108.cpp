/*
Nome:      Contando Caracters
ID:        2108
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   960 Bytes
Submissao: 05/07/16 19:27:27
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<string> vs;

int main()
{
	vector<vs> ans;
	string word;
	int index = 0;
	
	while(getline(cin, word))
	{
		if(word == "0")
			break;
			
		ans.push_back(vs());
		
		string buff = "";
		
		for(int i = 0; i < (int)word.size(); i++)
		{
			if(word[i] == ' ')
			{
				if(buff != "") {
					ans[index].push_back(buff);
					buff = "";
				}
			}
			else
			{
				buff += word[i];
			}
		}
		
		if(buff != "")
		{
			ans[index].push_back(buff);
		}
		
		index++;
	}
	
	string greater = "";
	int count = 0;
	
	for(int i = 0; i < index; i++)
	{
		for(int j = 0; j < (int)ans[i].size(); j++)
		{
			if(j > 0)
				cout << '-';
			int len = (int)ans[i][j].size();
			cout << len;
			if(len >= count)
			{
				count = len;
				greater = ans[i][j];
			}
		}
		
		puts("");
	}
	
	puts("");
	cout << "The biggest word: " << greater << endl;
}
