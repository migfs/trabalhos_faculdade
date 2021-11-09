/* 
Aluno.: Miguel Santana
Matrícula.: **********
UVA
Travalho AVA2.: Matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int num1, num2, num3 [3][3];
	setlocale (LC_ALL, "Portuguese");
	
	for (num1 = 0; num1 < 3; num1++)
		for(num2 = 0; num2 < 3; num2++) {
			printf("Elemento[%d][%d]= ",num1, num2);
			scanf("%d", &num3[num1][num2]);
		}
	printf("\n ***** Valores Originais *****\n");
	for (num1 = 0; num1 < 3; num1++) {
		for(num2=0; num2<3; num2++)
			printf("%d ",num3[num1][num2]);
		printf("\n");
		}
	for (num1 = 0; num1 < 3; num1++)
		for(num2 = 0; num2 < 3; num2++)
			num3[num1][num2]=num3[num1][num2] * 5;
			printf("\n ***** Valores multiplicados por 5 ***** \n");
	for (num1 = 0; num1 < 3; num1++) {
		for(num2 = 0; num2 < 3; num2++)
			printf("%d ",num3[num1][num2]);
		printf("\n");
		}		
	return 0;
}
