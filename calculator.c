#include <stdio.h>
#include <stdlib.h>

/* Projeto Calculadora */

int main() {
	int op; 
	float num1, num2, result;
	op=0;
	num1=0;
	num2=0;
	result=0;
		
	while(op>=0){    
		printf("Digite o primeiro valor do calculo:\n\t");
		scanf("%f", &num1);
		printf("Digite o segundo valor do calculo:\n\t");
		scanf("%f", &num2);
		system("CLS");
		
		    //SEGUNDA ENTRADA DE DADOS
		printf("Digite um numero para escolher uma operacao\n");
	    printf("(1) ADICAO\n(2) SUBTRACAO\n(3) MULTIPLICACAO\n(4) DIVISAO\n\t");
	    scanf("%d", &op);
	    system("CLS");
	    
	     //CALCULO
	    switch(op){
	    	system("CLS");
	    	case 1:
	    		result=num1+num2;
	    		break;
	    	case 2: 
			    result=num1-num2;
			    break;
			case 3: 
			    result=num1*num2;
			    break;
			case 4:
			    result=num1/num2;
			    break;
		    default:
			    printf("\n Opcao invalida!\n");
				break;	    
		}
		
		printf("\n\t O valor do resultado e: %0.2f", result);
		getch();
		system("CLS");
		
	}
	
	return 0;
}