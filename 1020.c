#include <stdio.h>

int main() {

    int X, A, M, D;

    scanf("%d", &X);

    A=X/365;
    X=X-(A*365);
    M=X/30;
    X=X-(M*30);
    D=X/1;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, D);
    return 0;
}
