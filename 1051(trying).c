#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double A, X ;
    scanf("%lf", &A);
    if (A<=2000){
        printf("Isento\n");
    }
    if (A>2000 && A<=3000) {
        X=((A-2000)*0.08);}
    else if(A>3000 && A<=4500) {
        X=(((A-3000)*0.18)+80);}
    else if (A>4500){
        X=(((A-4500)*0.28)+80+270);
    }
    printf("R$ %.2lf\n", X);

return 0;
}
