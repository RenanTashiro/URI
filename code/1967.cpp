#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

vii multi_matrix(vii A, vii B, int n, int m, int l)
{
   vii C(n, vi(l));
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
         C[i][j] = 0;
         for(int k = 0; k < m; k++) {
            C[i][j] += A[i][k] * B[k][j];
         }
      }      
   }      
   return C;
}

void read_matrix(vii &matrix, int n, int m)
{
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }
}

int main()
{   
   int G, A, M, C;

   scanf("%d%d%d%d", &G, &A, &M, &C);

   vii first(G,vi(A)), second(A,vi(M)), third(M,vi(C)), fs, fst;
   
   read_matrix(first, G, A);
   read_matrix(second, A, M);
   read_matrix(third, M, C);
   
   if(G*A*M+G*M*C <= A*M*C+G*A*C) {
      fs = multi_matrix(first, second, G, A, M);
      fst = multi_matrix(fs, third, G, M, C);
   } else {
      fs = multi_matrix(second, third, A, M, C);
      fst = multi_matrix(first, fs, G, A, C);
   }
   
   int space[C];
   
   memset(space, 0, sizeof space);
   
   for(int i = 0; i < G; i++) {
      for(int j = 0; j < C; j++) {
         int len = int(floor(1 + log10((double)fst[i][j])));
         if(space[j] < len) {
            space[j] = len;
         }
      }
   }
   
   for(int i = 0; i < G; i++) {
      for(int j = 0; j < C; j++) {
         printf("%s%*d", j > 0 ? " " : "", space[j], fst[i][j]);
      }
      puts("");
   }
}
