/*
Nome:      Palíndrome
ID:        2285
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   1,96 KB
Submissao: 05/02/18 10:18:25
*/
#include <bits/stdc++.h>
using namespace std;

// src:geeksforgeeks
// Returns the minimum number of cuts needed to partition a string
// such that every part is a palindrome
int n;

int minPalPartion(string str)
{  
    /* Create two arrays to build the solution in bottom up manner
       C[i] = Minimum number of cuts needed for palindrome partitioning
                 of substring str[0..i]
       P[i][j] = true if substring str[i..j] is palindrome, else false
       Note that C[i] is 0 if P[0][i] is true */
    int C[n];
    bool P[n][n];
  
    int i, j, L; // different looping variables
  
    // Every substring of length 1 is a palindrome
    for (i=0; i<n; i++)
    {
        P[i][i] = true;
    }
  
    /* L is substring length. Build the solution in bottom up manner by
       considering all substrings of length starting from 2 to n. */
    for (L=2; L<=n; L++)
    {
        // For substring of length L, set different possible starting indexes
        for (i=0; i<n-L+1; i++)
        {
            j = i+L-1; // Set ending index
  
            // If L is 2, then we just need to compare two characters. Else
            // need to check two corner characters and value of P[i+1][j-1]
            if (L == 2)
                P[i][j] = (str[i] == str[j]);
            else
                P[i][j] = (str[i] == str[j]) && P[i+1][j-1];
        }
    }
 
    for (i=0; i<n; i++)
    {
        if (P[0][i] == true)
            C[i] = 0;
        else
        {
            C[i] = INT_MAX;
            for(j=0;j<i;j++)
            {
                if(P[j+1][i] == true && 1+C[j]<C[i])
                    C[i]=1+C[j];
            }
        }
    }
  
    // Return the min cut value for complete string. i.e., str[0..n-1]
    return C[n-1];
}

int main()
{
	string str;
	int t = 1;
	
	while(cin >> n && n != 0)
	{
		cin >> str;
		
		cout << "Teste " << t++ << "\n";
		cout << minPalPartion(str) + 1 << "\n\n";
	}
}

