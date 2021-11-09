#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numero, num1, num2;
	setlocale(LC_ALL, "Portuguese");
	
	do {
		printf("\n1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n0 - Sair\n\n");
		scanf("%d", &numero);
		
		if (numero > 0 && numero < 9){
			printf("Informe dois n�meros: \n");
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &num1);
			printf("Digite o segundo n�mero: ");
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
				printf("\nSubtra��o: %d\n", (num1 - num2));
				break;
			case 3:
				printf("\nMultiplica��o: %d\n", (num1 * num2));
				break;
			case 4: 
				if (num2 == 0) {
					printf("Divis�o Inv�lida!! N�o � poss�vel dividir por 0!\n");
				} else {
					printf("\nDivis�o: %d\n", (num1 / num2));
				}
				break;
			default: 
				printf("N�mero inv�lido. Por favor, insira outro n�mero!\n");
				break;
		}
	} while (numero !=0);
}
