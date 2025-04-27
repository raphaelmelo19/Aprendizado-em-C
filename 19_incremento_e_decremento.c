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
  unsigned entrada,valor1,valor2,soma,quadrado;

  printf("Digite um valor abaixo de 85: ");
  scanf("%d", &entrada);

  switch (entrada > 85)
  {
  case 1:
    printf("ERROR: Valor digitado acima do limite.\n");
    break;

  }

soma = entrada;
valor1 = entrada + 1;
valor2 = entrada - 1;
soma = soma + valor1 + valor2;
quadrado = soma * soma;

printf("O valor incrementado: %d \n",valor1);
printf("O valor decrementado: %d \n",valor2);
printf("A soma de todos os valores: %d \n",soma);
printf("O quadrado da soma e: %d \n",quadrado);


  
  
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
