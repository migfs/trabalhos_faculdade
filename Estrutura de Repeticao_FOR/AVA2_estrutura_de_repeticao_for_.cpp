/* 
Aluno.: Miguel Santana
Matr�cula.: ***********
UVA
Trabalho AVA2.: Estrutura de repeti��o com For
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


char* verificaSeNumeroParOuImpar(int contador, int *totalizadorPares)
{
    char* tipo = "�MPAR";
    
    if (contador % 2 == 0) {
        // Somente se o valor for par que deve ter o totalizador incrementado
        *totalizadorPares = *totalizadorPares + 1;
        tipo = "PAR";
    }

    return tipo;
}

int main(void)
{
    int num1, num2, contador, totalizadorPares = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos iniciar a opera��o desejada!\n\n");
   
    printf("\nInforme o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("\nInforme o segundo n�mero: ");
    scanf("%d", &num2);

    for (contador = num1; contador <= num2; contador++) {

        char* tipo = verificaSeNumeroParOuImpar(contador, &totalizadorPares);
        
        printf("\nO n�mero %d � %s", contador, tipo);
    }
    printf("\nO total de n�meros pares exibidos foi:  %d", totalizadorPares);

    return 0;
}
