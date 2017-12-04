 /* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 24 de Outubro de 2017, 21:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    double Saldo, Valor;
    char operacao;
    
    printf("Introduza o seu saldo bancario: \n");
    scanf("%lf",&Saldo);
    printf("Seleciona 1(Credito) ou 2(Debito)");
    scanf(" %c",&operacao);
    printf("Introduza o valor desejado: \n");
    scanf("%lf",&Valor);
    
    if (operacao == '1')
    {
        Saldo += Valor;
        printf("Operacao realizada com sucesso. \n");
        printf("O seu saldo bacario é %.lf",Saldo);
    }else if (operacao == '2')
    {   if (Saldo > Valor)
    {
            Saldo-=Valor;
        printf("Operacao realizada com sucesso. \n");
        printf("O seu saldo bancario é %.lf",Saldo);
    }else if (Saldo < Valor)
    {
        Saldo -= Valor;
        printf("Operacao realizada sem sucesso!Saldo insuficiente. \n");
    }else
    {
        printf("O seu saldo bancario é %.lf",Saldo);    
    }      
    }
    return (0);
}

