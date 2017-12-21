/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 14 de Dezembro de 2017, 14:25
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{

    float Num1, Num2;
    char op;
    
    printf("Introduza a operacao que deseja (+ - * /): \n");
    scanf("%c", &op);
    printf("Introduza o seu numero: ");
    scanf("%f", &Num1);
    printf("Introduza o seu numero: ");
    scanf("%f", &Num2);
    
    
    switch(op) {
        case '+' : printf("%.2f + %.2f = %.2f ", Num1, Num2, Num1 + Num2); break;
        case '-' : printf("%.2f - %.2f = %.2f ", Num1, Num2, Num1 - Num2); break;
        case '*' : printf("%.2f * %.2f = %.2f ", Num1, Num2, Num1 * Num2); break;
        case '/' : printf("%.2f / %.2f = %.2f ", Num1, Num2, Num1 / Num2); break;
        default : printf("Opcao errada");
    }
    
    return (0);
}

