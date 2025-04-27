/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo  Aula N: 30
    Título da Aula: Atribuição composta
    
    Autor: Raphael Marins de melo
    Data: 04/12/24

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>



/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
 
  int soma = 5, sub = 3, mult = 9, rest = 2;
  float div = 8;

 printf("===========================================================\n");
 soma = soma + 5;
 soma += 5;
 printf("soma = soma + 5 = %d\n",soma);
 printf("soma += 5 = %d\n",soma);
 printf("===========================================================\n");


 div = div / 2;
 div /= 2;
 printf("div = div / 2 = %.2f\n",div);
 printf("div /= 2 = %.2f\n",div);
 printf("===========================================================\n");


 sub = sub - 1;
 sub -= 1;
 printf("sub = sub - 1 = %d\n",sub);
 printf("sub -= 1 = %d\n",sub);
 printf("===========================================================\n");

 mult = mult * 9;
 mult *= 9;
 printf("mult = mult * 9 = %d\n",mult);
 printf("mult *= 9 = %d\n",mult);
 printf("===========================================================\n");

 rest = rest % 11;
 rest %= 11;
 printf("rest = rest %% 11 = %.2d\n",rest);
 printf("rest %%= 11 = %.2d\n",rest);








  
  
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
