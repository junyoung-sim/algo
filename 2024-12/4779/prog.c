#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func(char *str, int a, int b) {
  if(a == b) return;

  int size = b-a+1;
  int a0   = a+size/3;
  int b0   = b-size/3;

  for(int i = a0; i <= b0; i++) {
    str[i] = ' ';
  }

  func(str, a, a0-1);
  func(str, b0+1, b);
}

int main(int argc, char *argv[])
{
  int n;

  while(scanf("%d", &n) != EOF) {
    int len = (int)pow(3,n);

    char *str = (char*)malloc(len);
    for(int i = 0; i < len; i++) {
      str[i] = '-';
    }

    func(str, 0, len-1);

    for(int i = 0; i < len; i++) {
      printf("%c", str[i]);
    }
    printf("\n");

    free(str);
  }

  return 0;
}