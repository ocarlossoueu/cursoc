#include <stdio.h>

int main () {
    int vx;
    int vy;

    printf("Digite o primeiro número: ");
    scanf("%d", &vx);

    printf("Digite o segundo número: ");
    scanf("%d", &vy);

    int vm = vx * vy;

    printf("O resultado é %d", vm);
}