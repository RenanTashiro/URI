/*
Nome:      Jogo do Operador
ID:        2493
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,28 KB
Submissao: 19/04/17 17:34:48
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;

	while(cin >> T)
	{
		int op1[T], op2[T], r[T];

		for(int i = 0; i < T; i++)
		{
			scanf("%d %d=%d", &op1[i], &op2[i], &r[i]);
		}

		char name[51], op;
		int expr;

		vector<string> winners;

		for(int i = 0; i < T; i++)
		{
			scanf("%s %d %c", name, &expr, &op);

			if((op == '+' && op1[expr - 1] + op2[expr - 1] != r[expr - 1]) ||
			   (op == '*' && op1[expr - 1] * op2[expr - 1] != r[expr - 1]) ||
			   (op == '-' && op1[expr - 1] - op2[expr - 1] != r[expr - 1]))
			{
				winners.push_back(name);
			}
            else if(op == 'I' && (
                op1[expr - 1] + op2[expr - 1] == r[expr - 1] ||
                op1[expr - 1] - op2[expr - 1] == r[expr - 1] ||
                op1[expr - 1] * op2[expr - 1] == r[expr - 1]))
            {
                winners.push_back(name);
            }
		}

		if(winners.size() == (unsigned) T)
		{
			cout << "None Shall Pass!" << endl;
		}
		else if(winners.size() != 0)
		{
			sort(winners.begin(), winners.end());

			cout << winners[0];

			for(unsigned i = 1; i < winners.size(); i++)
			{
				cout << " " << winners[i];
			}

			cout << endl;
		}
		else
		{
		    cout << "You Shall All Pass!" << endl;
		}
	}
}
