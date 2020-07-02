#include <stdio.h>
/*Insere y entre as posicoes k-1 e k do vetor v[0..n-1]
e devolve o novo valor de n. Supoe que 0 <= k <= n*/
int insere (int k, int y, int v[], int n) {
  int i;
  for (i = n; i > k; i--)
    v[i] = v[i-1];
  v[k] = y;
  return n + 1;
}

int main (void) {
  int i;
  int v[9] = {1, 2, 3, 4, 5};
  printf ("%d\n", insere (7, 43, v, 6));
  printf ("%d\n", v[8]);
  for (i = 0; i < 9; i++)
    printf ("%d ", v[i]);
  return 0;
}