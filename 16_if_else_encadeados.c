/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 22
    Título da Aula: if esle encadeados
    
    Autor: Raphael Marins de melo
    Data: 30/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
    int temp = 18;     // Exemplo de valor para teste
    int energy = 20;   // Exemplo de valor para teste

    if (temp < 30) {
        if (energy > 80) {
            printf("Aciona o cooler.\n");
        } else {
            printf("Alerta: Energia insuficiente.\n");
        }
    } else {
        printf("A temperatura esta ok.\n");
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