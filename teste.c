#include <stdio.h>
#include <stdlib.h>
struct {
    int dia, mes, ano;
    char mesEscrito[32];
} dma;
typedef struct {double x, y;} pontoNoPlano;

int main() {
    printf ("Hello World\n");
    char hi[32];
    fgets (hi, 32, stdin);
    printf ("\n%s\n", hi);
    pontoNoPlano p1, q2;        
    scanf ("%d %d %d", &dma.dia, &dma.mes, &dma.ano);
    printf ("Você nasceu no dia %d/%d/%d.\n", dma.dia, dma.mes, dma.ano);
    fgets (dma.mesEscrito, 32, stdin);
    printf ("%d é equivalente a %s, certo?", dma.mes, dma.mesEscrito);
    p1.x = 23;
    printf ("\n%lf", p1.x);


}