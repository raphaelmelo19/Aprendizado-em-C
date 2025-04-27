/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 19
    Título da Aula: operadores relacionais
    
    Autor: raphael marins de melo
    Data: 22/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
  
  int num1 = 0, num2 = 0;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o Segundo numero: ");
  scanf("%d", &num2);

    printf("\nComparando %d e %d:\n", num1, num2);
    printf("%d == %d -> %s\n", num1, num2, (num1 == num2) ? "Verdadeiro" : "Falso");
    printf("%d > %d -> %s\n", num1, num2, (num1 > num2) ? "Verdadeiro" : "Falso");
    printf("%d >= %d -> %s\n", num1, num2, (num1 >= num2) ? "Verdadeiro" : "Falso");
    printf("%d < %d -> %s\n", num1, num2, (num1 < num2) ? "Verdadeiro" : "Falso");
    printf("%d <= %d -> %s\n", num1, num2, (num1 <= num2) ? "Verdadeiro" : "Falso");
    printf("%d != %d -> %s\n", num1, num2, (num1 != num2) ? "Verdadeiro" : "Falso");
  
  system("PAUSE");	                             /* pausa excução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


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