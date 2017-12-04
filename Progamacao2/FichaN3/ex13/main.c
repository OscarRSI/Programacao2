/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 2 de Novembro de 2017, 13:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

 int nota; 
    
    while(1)
    {
        printf("Qual foi a sua nota ");
        scanf ("%d", &nota);

        if(nota >= 0 && nota <= 20)
            {
            if(nota > 9.5)
                {
                printf("%d Aluno Aprovado ", nota);    
                }else
                {
                    printf("%d Aluno Reprovado ", nota);
                }
            break;
        }else
            {
                printf ("A nota inválida");
            }
    }
    return (0);
}

