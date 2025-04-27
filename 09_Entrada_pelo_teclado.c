/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo: 09
    Título: Entrada Pelo Teclado.
    
    Autor: Raphael Marins de Melo
    Data: 16/10/1987

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
   
   printf("=====================================================================================\n");
   printf("Digite dois numeros para saber o resultado deles nas operacoes basicas da matematica.\n");
   printf("=====================================================================================\n");
   

   int num1, num2, soma, sub, div, mult;         //Variáveis 

   printf("Digite o primeiro numero: \n");
   scanf("%d", &num1);

   printf("Digite o segundo numero: \n");
   scanf("%d", &num2);

   soma = num1 + num2;
   sub = num1 - num2;
   div = num1 / num2;
   mult = num1 * num2;
   printf("============== O Resultado! ===============\n\n");
   printf(" O resultado de %d + %d = %d\n", num1,num2,soma);
   printf(" O resultado de %d - %d = %d\n", num1,num2,sub);
   printf(" O resultado de %d / %d = %d\n", num1,num2,div);
   printf(" O resultado de %d * %d = %d\n", num1,num2,mult);
  
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