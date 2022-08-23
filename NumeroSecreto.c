#include <stdio.h>

int main () {
    printf("**********************************\n");
    printf("*Bem-vindo ao jogo de adivinhação*\n");
    printf("**********************************\n");

    int vnumero = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);
}