/* ============================================================================
                                   
    Linguagem C                 
    Módulo 13
    Título da Aula: Caracteres
    
    Autor: Raphael Marins de melo
    Data: 10/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
  
  char nome[50];
  int num1,
      num2,
      resposta;
      
      printf("ola a digite o seu nome: ");
      scanf("%s", nome);

      printf("Digite o primeiro numero da soma: ");
      scanf("%d", &num1);

      printf("Digite o segundo numero da soma: ");
      scanf("%d", &num2);

      resposta = num1 + num2;

      printf("Ola %s, o resultado da soma e: %d\n",nome, resposta);
  
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
