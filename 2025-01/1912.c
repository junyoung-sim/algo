#include <stdio.h>
#include <stdlib.h>

int max
(
  int a,
  int b
) {

  return (a > b ? a : b);

}

int main()
{
  int n;
  int ans;

  scanf("%d", &n);

  int* v  = (int*)malloc(n * sizeof(int));
  int* dp = (int*)malloc(n * sizeof(int));

  for(int i = 0; i < n; i++) {

    scanf("%d", &v[i]);

    if(i == 0) {
      ans = v[0];
      continue;
    }

    dp[i] = max(v[i], max(dp[i-1] + v[i], v[i-1] + v[i]));
    ans   = max(dp[i], ans);

  }

  printf("%d\n", ans);

  free(v);
  free(dp);

  return 0;
}