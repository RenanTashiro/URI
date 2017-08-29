/*
Nome:      Infixa para Posfixa
ID:        1077
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   2,06 KB
Submissao: 01/08/16 14:54:35
*/
//---------------------------------
// (A*B+2*C^3)/2*A -: AB*2C3^*+2/A*|
//			  /	                   |
//		+			*              |
//	*		*	   2 A             |
// A B	   2 ^                     | 
//          C 3                    | 
//----------------------------------
// (2*4/a^b)/(2*c) -: 24*ab^/2c*/  |
//			  	 /                 |
//		  /				*          |
//	  *		 ^		   2 c         |
//   2 4    a b                    |
//---------------------------------
#include <iostream>
#include <stack>
#include <locale>

using namespace std;

class Expression
{
	public:
		Expression(string expr);
		string to_posfix();
	private:
		bool isoperator(char c);
		bool relevance(char op1, char op2);
		string expr;
};

Expression::Expression(string expr)
{
	this->expr = expr;
}

bool Expression::isoperator(char c)
{
	return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}

bool Expression::relevance(char op1, char op2)
{
	if(op1 == '(') {
		return false;
	}
	else if(op2 == '+' || op2 == '-') {
		return true;
	} 
	else if((op1 == '*' || op1 == '/') && op2 != '^') {
		return true;
	}	
	else if(op1 == '^') {
		return true;
	}
	return false;
}

string Expression::to_posfix()
{
	stack<char> stk;
	string new_expr = "";
	
	for(int i = 0; i < (int) expr.size(); i++) {
		if(isalnum(expr[i])) {
			new_expr += expr[i];
		}
		else if(isoperator(expr[i])) {
			while(!stk.empty() && relevance(stk.top(), expr[i])) {
				new_expr += stk.top(); stk.pop();
			} 
			stk.push(expr[i]);
		}
		else {
			if(expr[i] == '(') {
				stk.push(expr[i]);
			}
			else if(expr[i] == ')') {
				while(!stk.empty()) {
					if(stk.top() != '(')
						new_expr += stk.top(); 
					else {
						stk.pop(); break;
					}
					stk.pop();						
				}
			}
		}
	}		
	
	while(!stk.empty()) {
		if(stk.top() != '(')
			new_expr += stk.top(); 
		stk.pop();
	}
	
	return new_expr;
}

int main()
{
	int N;
	
	cin >> N;
	
	while(N--)
	{
		string expr;
		
		cin >> expr;
		
		Expression infix(expr);
		
		cout << infix.to_posfix() << endl;
	}
}
