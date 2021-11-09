#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numero, num1, num2;
	setlocale(LC_ALL, "Portuguese");
	
	do {
		printf("\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - Sair\n\n");
		scanf("%d", &numero);
		
		if (numero > 0 && numero < 9){
			printf("Informe dois números: \n");
			printf("Digite o primeiro número: ");
			scanf("%d", &num1);
			printf("Digite o segundo número: ");
			scanf("%d", &num2);
		}
		
		switch (numero){
			case 0:
				printf("\nSaindo...\n\n");
				break;
			case 1:
				printf("\nSoma: %d\n", (num1 + num2));
				break;
			case 2:
				printf("\nSubtração: %d\n", (num1 - num2));
				break;
			case 3:
				printf("\nMultiplicação: %d\n", (num1 * num2));
				break;
			case 4: 
				if (num2 == 0) {
					printf("Divisão Inválida!! Não é possível dividir por 0!\n");
				} else {
					printf("\nDivisão: %d\n", (num1 / num2));
				}
				break;
			default: 
				printf("Número inválido. Por favor, insira outro número!\n");
				break;
		}
	} while (numero !=0);
}
