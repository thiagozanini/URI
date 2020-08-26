#include <stdio.h>
#include <math.h>

int main() {

    float A, B, C, X;
    scanf("%f %f %f", &A, &B, &C);
    if (A<B+C && B<A+C && C<A+B){
        X=A+B+C;
        printf("Perimetro = %.1f\n", X);
    }
    else {
        X=((A+B)/2)*C;
        printf("Area = %.1f\n", X);
    }
    return 0;
}
