#include <stdio.h>

int pisoLog (int n) {
    if (n == 1)
        return 0;
    else 
        return pisoLog (n/2) + 1;
}
int main () {
    printf ("%d\n", pisoLog (511));
    return 0;
}