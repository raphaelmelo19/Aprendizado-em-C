/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 19
    Título da Aula: Operadores relacionais
    
    Autor: Raphael Marins de melo
    Data: 23/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
  
  float salario, vendas;

  printf("Informe o salario R$: ");
  scanf("%f", &salario);

  printf("Informe o valor em vendas R$: ");
  scanf("%f", &vendas);

  if(vendas >= 10000 && vendas < 20000 )
  {
    salario = salario + (salario/100*10);
    printf("Meta batida, seu salario com bonus de 10%%: %.2f\n",salario);
  }
  else if (vendas >= 20000 && vendas < 30000)
  {
    salario = salario + (salario/100*15);
    printf("Meta batida, seu salario com bonus de 15%%: %.2f\n",salario);
  }
  else if(vendas >= 30000)
  {
    salario = salario + (salario/100*25);
    printf("Meta batida, seu salario com bonus de 25%%: %.2f\n",salario);
  }
  else
  {
    printf("Nao teve nenhuma meta batida: R$ %.2f\n",salario);
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