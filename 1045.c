#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double A, B, C, X, Y;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (B<C){
        double D=B;
        B=C;
        C=D;}
    if (A<B){
        double E=A;
        A=B;
        B=E;}
    if (B<C){
        double F=B;
        B=C;
        C=F;}
    X=(B*B)+(C*C);
    Y=A*A;
    if (A>=C+B){
        printf("NAO FORMA TRIANGULO\n");}
    else{
    if (X==Y){
        printf("TRIANGULO RETANGULO\n");}
    else if (X<Y){
        printf("TRIANGULO OBTUSANGULO\n");}
    else if (X>Y){
        printf("TRIANGULO ACUTANGULO\n");}
    if (A==B && B==C){
        printf("TRIANGULO EQUILATERO\n");}
    else if (A==B || B==C || A==C){
        printf("TRIANGULO ISOSCELES\n");}
    return 0;}}
