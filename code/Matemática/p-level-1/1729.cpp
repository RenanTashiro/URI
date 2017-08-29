/*
Nome:      Média Não é Rápida o Suficiente!
ID:        1729
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   716 Bytes
Submissao: 28/10/15 07:17:06
*/
#include <cmath>
#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
  int n;
  double d;
  cin >> n >> d;
  int team;
  while (cin >> team)
  {
    printf("%3d: ", team);
    bool disqualified = false;
    int total = 0;
    for (int i=0 ; i<n ; i++)
    {
      char word[16];
      cin >> word;
      int hh, mm, ss;
      if (sscanf (word, "%d:%d:%d", &hh, &mm, &ss) != 3)
        disqualified = true;
      else
        total += 3600 * hh + 60 * mm + ss;
    }
    int average = (int) (floor (total / d + 0.5));
    if (disqualified)
      cout << "-";
    else
      printf("%d:%02d min/km", average/60, average%60);
    cout << endl;
  }
  return 0;
}