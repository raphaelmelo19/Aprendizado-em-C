/*

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= Tipos de Dados =-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=

Nome: Raphael Marins de Melo
Data: 10/10/2024

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

*/

// Biblioteca

#include <stdlib.h>
#include <stdio.h>

// Inicio do programa
int main()
{
    char letra = 'R';
    int numero = 12;
    float numeros = 3.12;
    double num_double = 191987.2631;
    unsigned int positivo = 322;
    signed int negativo = -200;
    short int pequeno = 32767;
    long int grande = 123456789;
    float num_cientifico = 12345.6789;
    int number = 255;
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-= O Resultado inicia aqui!!!=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("O tipo char so imprime um caractere: %c\n", letra);
    printf("O tipo int e usado para armazenar numeros inteiros: %d\n", numero);
    printf("O tipo float e usado para representar numeros de ponto flutuante: %.4f\n", numeros);
    printf("O tipo double e semelhante ao float mas armazena numeros com maior precisao ocupando 8 bytes de memoria: %.2f\n", num_double);
    printf("Unsigned armazena somente inteiros positivos: %u\n", positivo);
    printf("Signed armazena inteiros positivos ou negativos: %d\n", negativo);
    printf("O  short int ocupa 2 bytes: %hd\n", pequeno);
    printf(" O long int ocupa 4 ou 8 bytes dependendo do sistema: %ld\n", grande);
    printf("Usado para notacao cientifica com 'e' minusculo: %e\n", num_cientifico);
    printf("Usado para notacao cientifica com 'E' maiusculo: %E\n", num_cientifico);
    printf("Numero em decimal: %d\n", number);
    printf("Numero em octal: %o\n", number);
    printf("Numeros em hexadecimal minusculos: %x\n", number);
    printf("Numero hexadecimal MAIUSCULOS: %X\n", number);
system("pause");
return 0;
}
// Fim do programa

/*
Resumo:
char: para caracteres (%c).
int: para inteiros (%d).
float: para números com ponto flutuante (%f).
double: para números de ponto flutuante com maior precisão (%f ou %lf).
Modificadores:
unsigned: para inteiros não negativos (%u).
signed: para inteiros positivos e negativos (%d).
short int: para inteiros menores (%hd).
long int: para inteiros maiores (%ld).
%e, %E: para notação científica.
%o, %x, %X: para octal e hexadecimal.
*/