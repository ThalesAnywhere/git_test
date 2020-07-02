#include <stdio.h>

int maxV (int v[], int n) {
    if (n == 1)
        return v[0];
    else {
        int temp;
        temp = maxV (v, n-1);
        if (temp > v[n-1]) 
            return temp;
        else 
            return v[n-1];
    }
}
int minV (int v[], int n) {
    if (n == 1)
        return v[0];
    else {
        int temp;
        temp = minV (v, n-1);
        if (temp < v[n-1]) 
            return temp;
        else 
            return v[n-1];
        }
}
int main (void) {
    int v[] = {78, 8768, 1000, 2000, 1200, 231, 68, 203};
    int a = sizeof(v);
    printf ("max = %d\nmin = %d\n", maxV(v, a/4), minV(v, a/4));
    printf ("max - min = %d\n",  maxV(v, a/4)-minV(v, a/4));
}