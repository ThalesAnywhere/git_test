#include <stdio.h>
int pot (int k, int n) {
  if (n == 0)
    return 1;
  if (n == 1)
    return k;
  else 
    return k * pot (k, n-1);
}
int main (void) {
  printf ("%d\n", pot (100, 5));
  return 0;
}