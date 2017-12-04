/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include HEADEREX7_H

int lerinteiro(int minimo, int maximo){
    int num = 0;

    while (1) {


        printf("Introduza um numero entre 1 e 100: \n");
        scanf("%d", &num);

        if (num >= MIN && num <= MAX) {
            break;
        } else {
            printf("numero invalido \n");
        }


    }
    return num;

}

void caracter(int num) {
    int i;
    for (i = 1; i <= num; ++i) {
        printf("%c", AST);
    }
}