#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    int maiorAB, maiorde3;

    scanf("%d %d %d", &a, &b, &c);
    maiorAB = (a + b + (abs(a-b)))/2;
    maiorde3 = (maiorAB + c + (abs(maiorAB-c)))/2;
    printf("%d eh o maior\n", maiorde3);

    return 0;
}
