#include <stdio.h>
/*Remove o elemento de indice k do vetor v[0..n-1] e
devolve o novo valor de n. A funcao supoe 0 <= k < n.*/
int remocaoRecursivo (int k, int v[], int n) {
  if (k == n-1)
    return n - 1;
  else {
    v[k] = v[k+1];
    return remocaoRecursivo(k + 1, v, n);
  }    
}
int main (void) {
  int v[] = {1, 2, 3, 4, 5, 6};
  printf ("%d\n", remocaoRecursivo (3, v, 6)); 
  return 0;
}