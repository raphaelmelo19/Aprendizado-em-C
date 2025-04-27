/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 21
    Título da Aula: indentação
    
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
    char nome[100];
    int idade;

    
    printf("Digite o seu nome completo: ");
    scanf("%s", nome);

    printf("Digite a sua idade: ");
    scanf(" %d", &idade);

    if(idade > 30 && idade < 45)
    {
        printf("%s voce tem %d e esta na meia idade.\n", nome,idade);
    }
    else if (idade > 18 && idade < 30)
    {
       printf("%s voce tem %d voce e um jovem adulto.\n", nome,idade); 
    }
    else if (idade > 12 && idade < 18)
    {
        printf("%s voce tem %d voce e um adolescente\n", nome,idade);
    }
    else if (idade >= 1 && idade < 12)
    {
        printf("%s voce tem %d voce e uma crianca\n", nome,idade);
    }
    else
    {
        printf("%s voce tem %d voce e um idoso.\n", nome,idade);
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