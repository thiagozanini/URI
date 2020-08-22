#include <stdio.h>

int main(){
    double H, KMH;
    double L;
    scanf("%lf", &H);
    scanf("%lf", &KMH);
    L=(H*KMH)/12.00;
    printf("%.3lf\n", L);
    return 0;
}
