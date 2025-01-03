#include <stdio.h>
#include <stdlib.h>

int min
(
  int a,
  int b
) {

  return (a < b ? a : b);

}

int main()
{
  int n;

  scanf("%d", &n);

  int** dp = (int**)malloc(n * sizeof(int*));

  for(int i = 0; i < n; i++) {
    dp[i] = (int*)malloc(3 * sizeof(int));
    for(int j = 0; j < 3; j++) {
      scanf("%d", &dp[i][j]);
    }
  }

  for(int i = 1; i < n; i++) {
    dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
    dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
    dp[i][2] += min(dp[i-1][0], dp[i-1][1]);
  }

  int ans = min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));

  printf("%d\n", ans);

  for(int i = 0; i < n; i++) {
    free(dp[i]);
  }
  free(dp);

  return 0;
}