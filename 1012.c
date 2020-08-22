#include <stdio.h>

int main(){
    double A, B, C, Q, T, R, CIRC, TRAP;
    scanf("%lf %lf %lf", &A, &B, &C);
    T=(A*C)/2;
    CIRC=3.14159*(C*C);
    Q=B*B;
    TRAP=((A+B)*C)/2;
    R=A*B;
    printf("TRIANGULO: %.3lf\n", T);
    printf("CIRCULO: %.3lf\n", CIRC);
    printf("TRAPEZIO: %.3lf\n", TRAP);
    printf("QUADRADO: %.3lf\n", Q);
    printf("RETANGULO: %.3lf\n", R);
    return 0;
}
