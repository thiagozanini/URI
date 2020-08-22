#include <stdio.h>
#include <math.h>
int main() {

    double X;
    int Y, Z, A, B;
    scanf("%lf", &X);
    B=X*100;
    A=B/100;
    printf("NOTAS:\n");
    Y=A/100;
    A=A-Y*100;
    printf("%d nota(s) de R$ 100.00\n", Y);
    Y=A/50;
    A=A-Y*50;
    printf("%d nota(s) de R$ 50.00\n", Y);
    Y=A/20;
    A=A-Y*20;
    printf("%d nota(s) de R$ 20.00\n", Y);
    Y=A/10;
    A=A-Y*10;
    printf("%d nota(s) de R$ 10.00\n", Y);
    Y=A/5;
    A=A-Y*5;
    printf("%d nota(s) de R$ 5.00\n", Y);
    Y=A/2;
    A=A-Y*2;
    printf("%d nota(s) de R$ 2.00\n", Y);
    Y=A;

    A=X*100;
    A=A%100;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", Y);
    Z=A/50;
    A=A-Z*50;
    printf("%d moeda(s) de R$ 0.50\n", Z);
    Z=A/25;
    A=A-Z*25;
    printf("%d moeda(s) de R$ 0.25\n", Z);
    Z=A/10;
    A=A-Z*10;
    printf("%d moeda(s) de R$ 0.10\n", Z);
    Z=A/5;
    A=A-Z*5;
    printf("%d moeda(s) de R$ 0.05\n", Z);
    Z=A/1;
    printf("%d moeda(s) de R$ 0.01\n", Z);
    return 0;
}
