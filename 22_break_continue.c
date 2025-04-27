/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo N Aula N
    Título da Aula
    
    Autor: 
    Data: 

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>



/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
 
 int num1 = 0, num2 = 1, nextnum = 0;
 printf("serie de fibonacci ate 1000:\n");
 printf("%d, %d", num1, num2);


 while(1)
 {
    nextnum = num1 + num2;

    if(nextnum > 1000)
    {
        break;
    }
    printf(", %d", nextnum);

    num1 = num2;
    num2 = nextnum;
 }
 printf("\n");
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