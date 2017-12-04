/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 17:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    float Num1 ,Num2, Resultado;
    char OP;
    
    printf("Que operacao deseja utilizar:\n (+,-,*,/):");
    scanf(" %c",&OP);
    printf("Introduca o seu numero:");
    scanf("%f",&Num1);
    printf("Introduca o seu numero:");
    scanf("%f",&Num2);
    
    switch (OP){
        case '+': printf("%.2f + %.2f =%.2f",Num1,Num2,Num1+Num2);break;
        case '-': printf("%.2f - %.2f =%.2f",Num1,Num2,Num1-Num2);break;
        case '*': printf("%.2f * %.2f =%.2f",Num1,Num2,Num1*Num2);break;
        case '/': printf("%.2f / %.2f =%.2f",Num1,Num2,Num1/Num2);break;
        default:  printf ("Opcao errada");
    }
    
    return (0);
}

