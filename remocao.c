#include <stdio.h>
/*Remove o elemento de indice k do vetor v[0..n-1] e
devolve o novo valor de n. A funcao supoe 0 <= k < n.*/
int remocao (int k, int v[], int n) {
  int i;
  for (i = k; i < n-1; i++)
    v[i] = v[i+1]; 
  return n-1;
}

int main (void) {
  int v[] = {1, 2, 3, 4, 5, 6};
  printf ("%d\n", remocao (3, v, 6)); 
  return 0;
}