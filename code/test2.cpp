 #include <cstdio>

const int MAX_N = 1010;

int N;
int linha[MAX_N], coluna[MAX_N];
int diagonal[2];
bool usado[MAX_N * MAX_N];
bool ok;

int main ()
{
  scanf ("%d", &N);

  diagonal[0] = diagonal[1] = 0;
  for (int i = 0; i < N; ++i)
    linha[i] = coluna[i] = 0;
  for (int i = 1; i <= N * N; ++i)
    usado[i] = false;
  ok = true;

  for (int i = 0, v; i < N; ++i)
    {
      for (int j = 0; j < N; ++j)
        {
          scanf ("%d", &v);
          if (ok)
            {
              if (v < 1 || v > N * N || usado[v])
                ok = false;
              else
                {
                  usado[v] = true;

                  linha[i] += v;
                  coluna[j] += v;
                  if (i == j)
                    diagonal[0] += v;
                  if (i == N - j - 1)
                    diagonal[1] += v;
                }
            }
        }
    }

  ok &= (diagonal[0] == diagonal[1]);
  for (int i = 0; ok && i < N; ++i)
    ok &= (diagonal[0] == linha[i] && diagonal[0] == coluna[i]);

  printf ("%d\n", ok ? diagonal[0] : 0);

  return 0;
}
