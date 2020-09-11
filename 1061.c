#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int D, D2, H, H2, M, M2, S, S2, Z, Y, W, X;

    scanf("Dia %d", &D);
    scanf("%2d : %2d : %2d", &H, &M, &S);
    scanf("\tDia %d", &D2);
    scanf("%2d : %2d : %2d", &H2, &M2, &S2);

 	Z=S2-S;
 	Y=M2-M;
 	X=H2-H;
 	W=D2-D;

 	if (Z<0){
        Z=Z+60;
        Y=Y-1;}
    if (Z>=60){
        Z=Z-60;
        Y=Y+1;}
    if (Y<0){
        Y=Y+60;
        X=X-1;}
    if (Y>=60){
        Y=Y-60;
        X=X+1;}
    if (X>=24){
        X=X-24;
        W=W+1;}
    if (X<0) {
        X=X+24;
        W=W-1;}
    if(W<=0 && X<=0 && Y<1 && Z<=60){
        return 0;
    }

    else{
    printf("%d dia(s)\n", W);
	printf("%d hora(s)\n", X);
	printf("%d minuto(s)\n", Y);
	printf("%d segundo(s)\n", Z);}

	return 0;}
