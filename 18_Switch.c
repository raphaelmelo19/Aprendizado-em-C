/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 24
    Título da Aula: Switch
    
    Autor: Raphael Marins de Melo 
    Data: 01/11/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
  char estado_civil,pri_nome[100];
  int idade;
  
  printf("Digite o seu nome: ");
  scanf("%s", pri_nome);

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  printf("Estado civil [S]olteiro [C]asado [D]ivorciado ou [V]iuvo? ");
  scanf(" %c", &estado_civil);
  
  const char* descricao_civil;

  switch (estado_civil)
  {
  case 'c':
  case 'C':
    descricao_civil = "casado";
    break;
  case 's':
  case 'S':
  descricao_civil = "solteiro";
    break;
  case 'd':
  case 'D':
    descricao_civil = "divorciado";
    break;
  case 'v':
  case 'V':
  descricao_civil = "viuvo";
    break;
  default:
    printf("Digite uma opcao valida!\n");
    break;
  }
printf("%s tem %d anos e seu estado civil e %s!\n",pri_nome,idade,descricao_civil);
  
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