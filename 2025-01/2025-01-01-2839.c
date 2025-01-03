#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int ans;

  scanf("%d", &n);

  ans = RAND_MAX;

  for(int x = 0; x <= n/3; x++) {

    for(int y = 0; y <= n/5; y++) {

      if(x*3+y*5 != n) continue;

      if(x+y < ans) ans = x+y;

    }
  }

  if(ans == RAND_MAX) ans = -1;

  printf("%d\n", ans);

  return 0;
}