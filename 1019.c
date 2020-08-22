#include <stdio.h>
#include <stdlib.h>

int main(){
    int S, M, H, N;
    scanf("%d", &N);
    M=0;
    S=0;
    H=0;
    while(N>=3600){
       N=N-3600;
       H=H+1;
    }
    while(N>=60){
        N=N-60;
        M=M+1;
    }
    S=N;
    printf("%d:%d:%d\n", H, M, S);
    return 0;
}
