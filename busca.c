#include <stdio.h>
/*Recebe x, v e n >= 0 e devolve k tal que 0 <= k < n
e v[k] == x. Se tal k nao existe, devolve -1 */
int busca (int x, int v[], int n) {
  int k;
  k = n - 1;
  while (k >= 0 && v[k] != x) 
    k--;
  return k;
}
int main (void) {
  int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf ("%d\n", busca (6, v, 10));
  return 0;
 }