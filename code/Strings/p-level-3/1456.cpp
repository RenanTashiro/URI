/*
Nome:      Brainfuck
ID:        1456
Resposta:  Accepted
Linguagem: C++
Tempo:     0.032s
Tamanho:   1,57 KB
Submissao: 30/04/16 19:01:06
*/
#include <bits/stdc++.h>

#define MEMORY 30000

using namespace std;

void turingmachine(string program, string input)
{
	int memory[MEMORY] = {0}, progptr = 0, inptr = 0, memptr = 0;
	stack<int> loop;
	
	while(progptr < (int)program.size())
	{
		if(program[progptr] == '>')
		{
			memptr++;
		}
		else if(program[progptr] == '<')
		{
			memptr--;
		}
		else if(program[progptr] == '+')
		{
			memory[memptr]++;
		}
		else if(program[progptr] == '-')
		{
			memory[memptr]--;
		}
		else if(program[progptr] == '.')
		{
			printf("%c", memory[memptr]);
		}
		else if(program[progptr] == ',')
		{
			if(inptr < (int)input.size())
			{
				memory[memptr] = input[inptr];
				inptr++;
			}
			else
			{
				memory[memptr] = 0;
			}
		}
		else if(program[progptr] == '[')
		{
			loop.push(progptr);
			
			if(memory[memptr] == 0)
			{
				loop.pop();
				
				int loops = 1;
				
				while(loops)
				{
					progptr++;
					
					if(program[progptr] == '[')
					{
						loops++;
					}
					else if(program[progptr] == ']')
					{
						loops--;
					}
				}
			}
		}
		else if(program[progptr] == ']')
		{
			progptr = loop.top() - 1;
			loop.pop();
		}		
		else if(program[progptr] == '#')
		{
			for(int i = 0; i < 10; i++)
			{
				printf("%c", memory[i]);
			}
		}
		
		progptr++;
	}
}

int main()
{
	int T;

	scanf("%d", &T);
	
	for(int t = 1; t <= T; t++)
	{		
		string input, program;
		
		cin >> input >> program;
		
		printf("Instancia %d\n", t);
		turingmachine(program, input);
		puts("\n");
	}
}
