#include <stdio.h>
/*Recebe x, v e n >= 0 e devolve k tal que 0 <= k < n
e v[k] == x. Se tal k nao existe, devolve -1 */
int buscaR (int x, int v[], int n) {
  if (n == 0)
    return -1;
  if (x == v[n-1])  
    return n-1;
  return buscaR (x, v, n-1);
}
int main (void) {
  int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf ("%d\n", buscaR (3, v, 10));
  return 0;
}