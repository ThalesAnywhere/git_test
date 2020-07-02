#include <stdio.h>

int soma (int v[], int n) {
    if (n == 1)
        return v[0];
    else {
        int temp;
        temp = soma (v, n-1);
        return v[n-1] + temp;
    }   
}
int main () {
    int v[] = {1, 2, 3, 4, 5, 6, 10, 40, 22, 999};
    printf ("%d\n", soma (v, 10));
}