
#include <stdio.h>
#include <stdlib.h>

int main() {

    int VALOR,M100,M50,M20,M10,M5,M2,M1;

    scanf("%d",&VALOR);
    printf("%d\n",VALOR);
    M100=VALOR/100;
	VALOR=VALOR-(M100*100);
    M50=VALOR/50;
    VALOR=VALOR-(M50*50);
    M20=VALOR/20;
    VALOR=VALOR-(M20*20);
    M10=VALOR/10;
    VALOR=VALOR-(M10*10);
    M5=VALOR/5;
    VALOR=VALOR-(M5*5);
    M2=VALOR/2;
    VALOR=VALOR-(M2*2);
    M1=VALOR/1;
	printf("%d nota(s) de R$ 100,00\n",M100);
	printf("%d nota(s) de R$ 50,00\n",M50);
	printf("%d nota(s) de R$ 20,00\n",M20);
	printf("%d nota(s) de R$ 10,00\n",M10);
	printf("%d nota(s) de R$ 5,00\n",M5);
	printf("%d nota(s) de R$ 2,00\n",M2);
	printf("%d nota(s) de R$ 1,00\n",M1);

    return 0;
}
