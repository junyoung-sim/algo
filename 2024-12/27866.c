#include <stdio.h>
#include <stdlib.h>

int main()
{
  char* str;
  int   i;

  str = (char*)malloc(1000 * sizeof(char));
  
  scanf("%s", str);
  scanf("%d", &i);

  printf("%c\n", str[i-1]);

  str = NULL;
  free(str);

  return 0;
}