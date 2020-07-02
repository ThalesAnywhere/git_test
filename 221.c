#include <stdio.h>

int devMax (int v[], int n) {
    int temp, i;
    if (n == 1)
        return v[0];
    temp = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] >= temp) 
            temp = v[i];
    }
    return temp;
}

int main () {
    int v[] = {1, 2, 3, 4, 4, 100033, 321, -2, 0, 2};
    printf ("%d\n\n", devMax (v, 10));
    int a = sizeof(v);
    printf ("\n%d\n", a/4);
}