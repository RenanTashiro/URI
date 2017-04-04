#include <bits/stdc++.h>

using namespace std;

bool isoperator(char c)
{
	return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}

bool relevance(char op1, char op2)
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

int main()
{
	int T;
	
	cin >> T;
	
	while(T--) 
	{
		string exp;
		
		cin >> exp;
		
		stack<char> stk;
		
		for(int i = 0; i < (int) exp.size(); i++) {
			if(isalnum(exp[i])) {
				cout << exp[i];
			}
			else if(isoperator(exp[i])) {
				while(!stk.empty() && relevance(stk.top(), exp[i])) {
					cout << stk.top(); stk.pop();
				} 
				stk.push(exp[i]);
			}
			else {
				if(exp[i] == '(') {
					stk.push(exp[i]);
				}
				else if(exp[i] == ')') {
					while(!stk.empty()) {
						if(stk.top() != '(')
							cout << stk.top(); 
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
				cout << stk.top(); 
			stk.pop();
		}		
		
		cout << endl;
	}
}

