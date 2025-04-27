/*============================ Calculos Simples em C ==========================*/

/*----------------------------------- Biblioteca ------------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*-----------------------------------------------------------------------------*/

int main()  /*Inicio do programa.*/
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("O valor da primeira operação é: %d \n\n", 16 + 8);
    printf("O valor da segunda operação é: %d \n\n", 16 - 8);
    printf("O valor da terceira operação é: %d \n\n", 16 / 8);
    printf("O valor da quinta operação é: %d \n\n", 16 * 8);
    printf("O valor da sexta operação é: %d \n\n", 25 + 5 * 2 / 5);
    printf("O valor da sétima operação é: %d \n\n", (25 + 5)* 2 / 5);
    printf("O valor da oitava operação é: %d \n\n", ((25 + 5)* 2)/ 5);
    system("pause");
    return 0;    /* Fim do programa. */
}