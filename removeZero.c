#include <stdio.h>
/*Esta funçao remove todos os elementos nulos de v[0..n-1],
deixa o resultado em v[0..i-1] e devolve i.*/ 
int removeZeros (int v[], int n) {
  int i = 0, j;
  for (j = 0; j < n; j++) {
    if (v[j] != 0) {
      v[i] = v[j];
      i++;
    }
  }
  return i;
}
int main (void) {
  int i;
  int v[7] = {1, 0, 0, 7, 0, 5, 0};
  for (i = 0; i < 7; i++) 
    printf ("%d ", v[i]);
  printf("\n%d\n", removeZeros (v, 7));
  for (i = 0; i < 7; i++) 
    printf ("%d ", v[i]);
  return 0;
}