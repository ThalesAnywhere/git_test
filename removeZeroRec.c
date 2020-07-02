#include <stdio.h>
/*Esta funçao remove todos os elementos nulos de v[0..n-1],
deixa o resultado em v[0..i-1] e devolve i.*/ 
int removeZeroRec (int v[], int n) {
  int m;
  if (n == 0) 
    return 0;
  m = removeZeroRec(v, n-1);
  if (v[n-1] == 0)
    return m;
  v[m] = v[n-1];
  return m + 1;
}

int main (void) {
  int i;
  int v[7] = {1, 0, 0, 4, 0, 5, 0};
  for (i = 0; i < 7; i++) 
    printf ("%d ", v[i]);
  printf("\n%d\n", removeZeroRec (v, 7));
  for (i = 0; i < 7; i++) 
    printf ("%d ", v[i]);
  return 0;
}