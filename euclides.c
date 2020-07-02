#include <stdio.h>
int euc (int m, int n) {
  if (n == 0)
    return m;
  else 
    return euc (n, m%n);
  }

int main (void) {
  printf ("%d\n", euc (2000, 30));
  return 0;
}