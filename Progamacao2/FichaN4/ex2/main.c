/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 8 de Novembro de 2017, 19:12
 */

#include <stdio.h>
#include <stdlib.h>

char operacao;
float resultado, Num1, Num2;
void limparBufferEntrada()
{
char ch;
while ((ch = getchar()) != '\n' && ch != EOF);
}
long somar()
{
    return Num1 + Num2;
}
long subtrair()
{
    return Num1 - Num2;
}
long multiplicar()
{
    return Num1 * Num2;
}
long dividir()
{
    return Num1 / Num2;
}
int main(int argc, char** argv) 
{
    
    printf("Introduza o primeiro numero:\n");
    scanf("%f", &Num1);
    printf("Introduza o segundo numero:\n");
    scanf("%f", &Num2);
    limparBufferEntrada();
    printf("Qual a operacao que deseja realizar (+, -, *, /)\n");
    scanf("%c",&operacao);
    
    switch (operacao) 
    {
        case '+':resultado = somar();       break;
        case '-':resultado = subtrair();    break;
        case '*':resultado = multiplicar(); break;
        case '/':resultado = dividir();     break;
        default:printf("Opção inválida. ");
    }
    
    limparBufferEntrada();
    
    
    
    printf("O resultado da sua operação é: %.2f",resultado);
    return (0);
}

