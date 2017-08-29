/*
Nome:      Balanço de Parênteses I
ID:        1068
Resposta:  Accepted
Linguagem: C++
Tempo:     0.076s
Tamanho:   913 Bytes
Submissao: 01/08/16 13:55:48
*/
#include <iostream>

#define PARENTHESIS_B 1

using namespace std;

class SintaxAnalyser
{
	public:
		SintaxAnalyser(string expr);
		bool valid(int type);
	private:
		bool check_PB();
		string expr;
};

SintaxAnalyser::SintaxAnalyser(string expr)
{
	this->expr = expr;
}

bool SintaxAnalyser::check_PB()
{
	int memory = 0;
	
	for(int i = 0; i < (int)expr.size(); i++)
	{
		if(expr[i] == '(')		
			memory++;
		else if(expr[i] == ')')
		{
			if(memory == 0)
				return false;
			memory--;
		}
		
	}
	
	return memory == 0;
}

bool SintaxAnalyser::valid(int type)
{
	switch(type)
	{
	case PARENTHESIS_B: return check_PB();
	default: cerr << "err(1): Invalid Type."; return false;
	}
}

int main()
{
	string expr;
	
	while(cin >> expr)
	{
		SintaxAnalyser analyser(expr);
		
		cout << (analyser.valid(PARENTHESIS_B) ? "correct" : "incorrect") << "\n";
	}
}
