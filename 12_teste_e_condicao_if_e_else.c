/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 18
    Título da Aula if e else
    
    Autor: Raphael Marins de Melo
    Data: 19/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */

int main()
{
    printf(" --- Calculadora Simples ---\n\n"
           "[+] Para Adicao\n"
           "[-] Para Subtracao\n"
           "[/] Para Divisao\n"
           "[*] Para Multiplicacao\n"
           "[0] Para finalizar\n");
    printf("=============================================\n\n");

    int valor1, valor2, result;
    char operador;

    printf("Digite um numero: ");
    scanf("%d", &valor1);
  
    printf("Digite um segundo numero: ");
    scanf("%d", &valor2);
    printf("=============================================\n");
    printf("Escolha um operador: ");
    scanf(" %c", &operador); 

   
    if (operador == '+')
    {
        result = valor1 + valor2;
        printf("O resultado de %d + %d = %d\n", valor1, valor2, result);
    }
    else if (operador == '-')
    {
        result = valor1 - valor2;
        printf("O resultado de %d - %d = %d\n", valor1, valor2, result);
    }
    else if (operador == '/')
    {
        if (valor2 != 0) 
        {
            float divisao = (float)valor1 / valor2; 
            printf("O resultado de %d / %d = %.2f\n", valor1, valor2, divisao);
        }
        else
        {
            printf("Erro: divisao por zero nao permitida.\n");
        }
    }
    else if (operador == '*')
    {
        result = valor1 * valor2;
        printf("O resultado de %d * %d = %d\n", valor1, valor2, result);
    }
    else
    {
        printf("Operador invalido.\n");
    }

  
  system("PAUSE");	                             /* pausa excução (Pressione qualquer tecla para continuar . . .) */
  return 0; 
}                                     /* retorna 0, se main for executada corretamente */
  
 /* end main */


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */