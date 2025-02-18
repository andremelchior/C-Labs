//algoritmo para calcular o seno

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
        float seno, cat_oposto, hip;
        printf("Digite o cateto oposto e a hipotenusa: \n");
        scanf("%f%f", &cat_oposto, &hip);
        seno = cat_oposto/hip;
        printf("O seno é: %f.\n", seno);
        return 0;
}