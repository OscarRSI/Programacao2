
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 18 de Outubro de 2017, 23:07
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
     double Saldo=0, Juros, Taxa;
     double Deposito;
    
    
    printf("Introduza a taxa do juro: ");
    scanf("%lf",&Taxa);
 
    printf("Introduza o deposito a prazo do 1ºTrimestre: ");
    scanf("%lf",&Deposito);
    Saldo += Deposito;
    Juros = Saldo*(Taxa/100);
    Saldo +=Juros;
    printf("O seu saldo bancario é: %.2lf\n",Saldo);
    printf("O seu valor de juros é: %.2lf\n",Juros) ;
    
    printf("Introduza o deposito a prazo do 2ºTrimestre: ");
    scanf("%lf",&Deposito);
    Saldo += Deposito;
    Juros = Saldo*(Taxa/100);
    Saldo +=Juros;
    printf("O seu saldo bancario é: %.2lf\n",Saldo);
    printf("O seu valor de juros é: %.2lf\n",Juros) ;
 
    printf("Introduza o deposito a prazo do 3ºTrimestre: ");
    scanf("%lf",&Deposito);
    Saldo += Deposito;
    Juros = Saldo*(Taxa/100);
    Saldo +=Juros;
    printf("O seu saldo bancario é: %.2lf\n",Saldo);
    printf("O seu valor de juros é: %.2lf\n",Juros) ;
    
    printf("Introduza o deposito a prazo do 4ºTrimestre: ");
    scanf("%lf",&Deposito);
    Saldo += Deposito;
    Juros = Saldo*(Taxa/100);
    Saldo +=Juros;
    printf("O seu saldo bancario é: %.2lf\n",Saldo);
    printf("O seu valor de juros é: %.2lf\n",Juros);
    
    return (0);
}

