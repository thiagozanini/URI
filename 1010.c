#include <stdio.h>

int main(){
    int COD1, COD2;
    double NUM1, NUM2, VU1, VU2, VP1, VP2, VT;
    scanf("%d", &COD1);
    scanf("%lf %lf", &NUM1, &VU1);
    scanf("%d", &COD2);
    scanf("%lf %lf", &NUM2, &VU2);
    V1P=NUM1*VU1;
    VP2=NUM2*VU2;
    VT=VP1+VP2;
    printf("VALOR A PAGAR: R$ %.2lf\n", VT);
    return 0;
}
