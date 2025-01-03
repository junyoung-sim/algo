#include <stdio.h>
#include <stdlib.h>

int main()
{
  int  x;
  char l;

  scanf("%d", &x);

  if     (x < 60)   l = 'F';
  else if(x < 70)   l = 'D';
  else if(x < 80)   l = 'C';
  else if(x < 90)   l = 'B';
  else if(x <= 100) l = 'A';

  printf("%c\n", l);

  return 0;
}