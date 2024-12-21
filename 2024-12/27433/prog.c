#include <stdio.h>
#include <stdlib.h>

long int factorial(int n) {
  if(n == 0 || n == 1)
    return 1;
  return n * factorial(n-1);
}

int main(int argc, char *argv[])
{
  int N;

  scanf("%d", &N);

  printf("%ld\n", factorial(N));

  return 0;
}