#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;

  int row = -1;
  int col = -1;
  int max = -1;

  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      scanf("%d", &n);
      if(n > max) {
        max = n;
        row = i+1;
        col = j+1;
      }
    }
  }

  printf("%d\n%d %d\n", max, row, col);

  return 0;
}