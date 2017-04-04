#include <stdio.h>

#define MAXR 1000

int d[MAXR],F,R;

int main() {
  int i,ans;
  int f;

  scanf("%d%d",&F,&R);
  for ( i = 0; i < R; i++ )
    scanf("%d",&d[i]);

  ans = (d[0]-1)>(F-d[R-1])?(d[0]-1):(F-d[R-1]);

  for ( i = 1; i < R; i++ ){
    f = (d[i]-d[i-1])/2;
    if ( f > ans ) ans = f;
  }

  printf("%d\n",ans);
  return 0;
}
