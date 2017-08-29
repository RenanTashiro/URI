/*
Nome:      Notas
ID:        2469
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   369 Bytes
Submissao: 10/06/17 16:49:31
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	vector<pair<int,int>> grades(101);
	
	for(int i = 0; i <= 100; i++)
	{
		grades[i] = {0, i};
	}
	
	while(N--)
	{
		int grade;
		
		cin >> grade;
		
		grades[grade].first++;
	}
	
	sort(grades.rbegin(), grades.rend());
	
	cout << grades[0].second << endl;
}
