#include <stdio.h>

int main(){
    char N;
    double C, S, VE, TOTAL;
    scanf("%s", &N);
    scanf("%lf %lf", &S, &VE);
    C=(VE*0.15);
    TOTAL=C+S;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
