/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo: 29
    Título da Aula: laço for
    
    Autor: Raphael Marins de Melo
    Data: 30/11/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>



/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
 
  int i,j,num;

  printf("Digite um numero para saber quantos degraus ele ira subir: ");
  scanf("%d", &num);

  for(i = 0; i <= num; i++){
    for(j = 0; j < i; j++){
        printf("#");

    }
  
    printf("\n");
  }

 
  
  
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
