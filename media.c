#include <stdio.h>
#include <stdlib.h>

void main() {
        float num1, num2, num3, media;
        printf(" ___________________________\n");
        printf("| Programa calculo de média |\n");
        printf(" ---------------------------\n");

        printf("Digite o primeiro numero: \n");
        scanf("%f", &num1);

        printf("Digite o segundo numero: \n");
        scanf("%f", &num2);

        printf("Digite o terceiro numero: \n");
        scanf("%f", &num3);

        media = (num1 + num2 + num3)/3;

        printf("A média de %.1f + %.1f + %.1f é: %.1f.\n", num1, num2, num3, media);
}