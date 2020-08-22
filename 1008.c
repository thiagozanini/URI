#include <stdio.h>

int main(){
    int NUMBER, H;
    float PH, SALARY;
    scanf("%d %d %f", &NUMBER, &H, &PH);
    SALARY=(H*PH);
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}
