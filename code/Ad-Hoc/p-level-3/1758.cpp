/*
Nome:      Pontos Extras
ID:        1758
Resposta:  Accepted
Linguagem: C++
Tempo:     0.788s
Tamanho:   984 Bytes
Submissao: 10/06/17 13:21:25
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int P, N;
		
		scanf("%d%d", &P, &N);
		
		vector<double> grades(N, 0.0);
		vector<double> max_grade(N, 0.0), max_grade_ua(N, 0.0);
		
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < P; j++)
			{
				double grade;
				
				cin >> grade;
				
				grades[i] += grade; 
				max_grade[i] = max(max_grade[i], grade);
				
				if(grade < 7.0)
				{
					max_grade_ua[i] = max(max_grade_ua[i], grade);
				}
			}
		}
		
		for(int i = 0; i < N; i++)
		{
			double average = grades[i] / P;
			
			if(average < 4.0)
			{
				cout << fixed << setprecision(2) << average << endl;
			}
			else
			{
				if(average < 7.0)
				{
					cout << fixed << setprecision(2) << max(average, max_grade_ua[i]) << endl;
				}
				else
				{
					cout << fixed << setprecision(2) << max(average, max_grade[i]) << endl;
				}
			}
		}
	}
}
