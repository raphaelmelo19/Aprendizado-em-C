/*============================ Calculos Simples em C ==========================*/

/*----------------------------------- Biblioteca ------------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*-----------------------------------------------------------------------------*/

int main()  /*Inicio do programa.*/
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("O valor da primeira opera��o �: %d \n\n", 16 + 8);
    printf("O valor da segunda opera��o �: %d \n\n", 16 - 8);
    printf("O valor da terceira opera��o �: %d \n\n", 16 / 8);
    printf("O valor da quinta opera��o �: %d \n\n", 16 * 8);
    printf("O valor da sexta opera��o �: %d \n\n", 25 + 5 * 2 / 5);
    printf("O valor da s�tima opera��o �: %d \n\n", (25 + 5)* 2 / 5);
    printf("O valor da oitava opera��o �: %d \n\n", ((25 + 5)* 2)/ 5);
    system("pause");
    return 0;    /* Fim do programa. */
}