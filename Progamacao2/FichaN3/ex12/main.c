/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 2 de Novembro de 2017, 13:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
   int Soma, Total, Num;

    do{
        printf("Introduza o seu numero (-1 para media) ");
        scanf("%d", &Num);
        
        if (Num == -1)
        {
            printf("A media é %.2lf", (float)Soma / Total);
        }else
            {
            Soma += Num;
            Total++;
            }
    }
    while (Num != -1);


    return (0);
}

