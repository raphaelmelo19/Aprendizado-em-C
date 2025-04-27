/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 20
    Título da Aula: Laço While
    
    Autor: Raphael Marins de Melo
    Data: 15/11/24

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
  
  int inicio, fim, atual;

 //Solicita ao usuário o range de frequência

 printf("Digite o valor inicial do Range (em Hz): ");
 scanf("%d", &inicio);
 printf("Digite o valor final do Range (em HZ): ");
 scanf("%d", &fim);

 //Verifica se os valores são válidos

 if(inicio >= fim)
 {
    printf("O valor inicial deve ser menor que o valor final\n");
    return 1; // Termina o programa com erro
 }

// Inicializa a variável atual com o valor de início
    atual = inicio;

 //Laço While para imprimir as frequências

 while(atual < fim)
 {
    printf("%d Hz\n",atual);
    atual++; //Incrementa a frequência atual
 }

 //Imprimir o último valor sem a vírgula

 printf("%d Hz\n",atual);

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
