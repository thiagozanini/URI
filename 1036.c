#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){
	double A, B, C, X, Y, R1, R2;
	scanf("%lf %lf %lf", &A, &B, &C);
	X=((B*B)-4*A*C);
	if(((B * B) - 4 * A * C) < 0 || A == 0){
		printf("Impossivel calcular\n");
	}
	else{
		Y= sqrt(X);
		R1=(-B+Y)/(2*A);
		R2=(-B-Y)/(2*A);
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}
	return 0;
}
