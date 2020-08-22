#include <stdio.h>

int main(){
    double R, V, pi, QT;
    QT=(4.0/3.0);
    pi=3.14159;
    scanf("%lf", &R);
    V=QT*pi*(R*R*R);
    printf("VOLUME = %.3lf\n", V);
    return 0;
}
