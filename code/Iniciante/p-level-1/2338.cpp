/*
Nome:      Morse
ID:        2338
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,47 KB
Submissao: 19/04/17 16:16:55
*/
#include <bits/stdc++.h>
using namespace std;

map<string,string> table = {
		{".-"  , "a"},
		{"-...", "b"},
		{"-.-.", "c"},
		{"-.." , "d"},
		{"."   , "e"},
		{"..-.", "f"},
		{"--." , "g"},
		{"....", "h"},
		{".."  , "i"},
		{".---", "j"},
		{"-.-" , "k"},
		{".-..", "l"},
		{"--"  , "m"},
		{"-."  , "n"},
		{"---" , "o"},
		{".--.", "p"},
		{"--.-", "q"},
		{".-." , "r"},
		{"..." , "s"},
		{"-"   , "t"},
		{"..-" , "u"},
		{"...-", "v"},
		{".--" , "w"},
		{"-..-", "x"},
		{"-.--", "y"},
		{"--..", "z"}
	};

int main()
{	
	int t;
	
	cin >> t;
	
	while(t--)
	{
		string morse;
		
		cin >> morse;
		
		string sentence = "", symbol = "";
		int trace_counter = 0, dot_counter = 0;
		
		for(unsigned i = 0; i < morse.size(); i++)
		{
			if(morse[i] == '.')	{							
				dot_counter++;
			}
			else {
				if(dot_counter == 3 or dot_counter == 7) {
					sentence += table[symbol];
					symbol = "";
					if(dot_counter == 7) {
						sentence += " ";
					}
				}
				dot_counter = 0;
			}
						
			if(morse[i] == '=') {
				trace_counter++;
			}
			else {
				if(trace_counter == 1) {
					symbol += ".";
				}
				else if(trace_counter == 3) {
					symbol += "-";
				}
				trace_counter = 0;
			}					
		}
		
		if(trace_counter == 1) {
			symbol += ".";
		}
		else if(trace_counter == 3) {
			symbol += "-";		
		}
		
		if(symbol != "") {
			sentence += table[symbol];
		}
		
		cout << sentence << endl;
	}
}
