#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int x;
  int v;

  scanf("%d %d", &n, &x);

  for(int i = 0; i < n; i++) {
    
    scanf("%d", &v);

    if(v < x) printf("%d ", v);

  }

  printf("\n");

  return 0;
}