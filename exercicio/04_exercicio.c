/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 20
    Título da Aula: operadores lógicos
    
    Autor: Raphael Marins de Melo
    Data: 24/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
  int idade;
  char carro;

  // Entrada de idade e carro
  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  printf("Possui carro [S] ou [N]: ");
  scanf(" %c", &carro);

  // Verifica se possui carro
  if(carro == 's' || carro == 'S')
  {
    printf("Seu auxilio e no valor de R$ 200 Reais.\n");
  }
  else if(carro == 'n' || carro == 'N')
  {
    printf("Seu auxilio e no valor de R$ 500 Reais.\n");
  }
  else
  {
    printf("Entrada invalida para carro.\n");
  }

  // Verificação da idade, independente da resposta sobre o carro
  if(idade < 18 || idade > 50)
  {
    printf("Quem tem idade inferior a 18 ou superior a 50 anos, recebe 200.00 Reais de auxilio.\n");
  }
system("PAUSE");	                             /* pausa excução (Pressione qualquer tecla para continuar . . .) */
  return 0;  /* retorna 0, se main for executada corretamente */
  
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