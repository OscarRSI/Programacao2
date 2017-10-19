
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 17 de Outubro de 2017, 22:35
 */

#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char** argv) 
{
    int soma; 
    float total_eleitores,Cand_1, Cand_2, Cand_3, Cand_4, Cand_5;
    float Per1, Per2, Per3, Per4, Per5;

    printf("Introduza o numero total de eleitores: ");
    scanf("%d",&total_eleitores);
    printf("Introduza o valor total de votos do candidato 1: ");
    scanf("%d",&Cand_1);
    printf("Introduza o valor total de votos do candidato 2: ");
    scanf("%d",&Cand_2);
    printf("Introduza o valor total de votos do candidato 3: ");
    scanf("%d",&Cand_3);
    printf("Introduza o valor total de votos do candidato 4: ");
    scanf("%d",&Cand_4);
    printf("Introduza o valor total de votos do candidato 5: ");
    scanf("%d",&Cand_5);
    
    soma = Cand_1 + Cand_2 + Cand_3 + Cand_4 + Cand_5;
    
    Per1 = (Cand_1/total_eleitores) *100;
    Per2 = (Cand_2/total_eleitores) *100;
    Per3 = (Cand_3/total_eleitores) *100;
    Per4 = (Cand_4/total_eleitores) *100;
    Per5 = (Cand_5/total_eleitores) *100;

    puts("Candidato nº 1");
    printf("A percentagem de votos é: %.2f %%\n",Per1);
    puts("Candidato nº 2");
    printf("A percentagem de votos é: %.2f %%\n",Per2);
    puts("Candidato nº 3");
    printf("A percentagem de votos é: %.2f %%\n",Per3);
    puts("Candidato nº 4");
    printf("A percentagem de votos é: %.2f %%\n",Per4);
    puts("Candidato nº 5");
    printf("A percentagem de votos é: %.2f %%\n",Per5);
    
    return (0);
}

