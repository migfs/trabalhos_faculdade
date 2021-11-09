/* 
Aluno.: Miguel Santana
Matrícula.: ***********
UVA
Trabalho AVA2.: Estrutura de repetição com For
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


char* verificaSeNumeroParOuImpar(int contador, int *totalizadorPares)
{
    char* tipo = "ÍMPAR";
    
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

    printf("\nVamos iniciar a operação desejada!\n\n");
   
    printf("\nInforme o primeiro número: ");
    scanf("%d", &num1);
    printf("\nInforme o segundo número: ");
    scanf("%d", &num2);

    for (contador = num1; contador <= num2; contador++) {

        char* tipo = verificaSeNumeroParOuImpar(contador, &totalizadorPares);
        
        printf("\nO número %d é %s", contador, tipo);
    }
    printf("\nO total de números pares exibidos foi:  %d", totalizadorPares);

    return 0;
}
