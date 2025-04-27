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
#include <locale.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
 
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

 char menu;
 do
 {
   //system("cls");
   printf("[N] para novo cliente:\n[C] para consultar clientes:\n[L] para lista de clientes:\n[S] para sair\n");
   printf("Escolha uma opcao: ");
   scanf(" %c", &menu);
 switch (menu)
 {
 case 'n':
 case 'N':
    printf("Digite o nome do novo cliente: \n");
    break;
 case 'c':
 case 'C':
    printf("Consultar cliente\n");
    break;
 case 'l':
 case 'L':
    printf("Lista de clientes.\n");
    break;
 case 's':
 case 'S':
    printf("Saindo do sistema...\n");
    break;
 default:
    printf("ERROR: Opcao invalida!");
    break;

 }
 
 }while (menu != 's' && menu != 'S');


 

  
  
  
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