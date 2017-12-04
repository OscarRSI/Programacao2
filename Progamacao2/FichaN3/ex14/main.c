/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 2 de Novembro de 2017, 14:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
     int voto, total, candidato1, candidato2, candidato3, candidato4, nulo, branco;
    
    while (1){
        
        printf("Qual foi o seu voto (1, 2, 3, 4, 0 branco, 9 nulo) \n");
        printf("Introduza -1 para parar \n ");
        scanf("%d", &voto);
        
        if (voto >= 1 && voto <= 4)
        {    
            if (voto == 1)
                {
                    candidato1 += 1;
                }else if (voto == 2 )
                {
                    candidato2 += 1;
                }else if (voto == 3 )
                {
                    candidato3 += 1;
                }else if (voto == 4 )
                {
                    candidato4 += 1;
                }
            ++total;
            
        }else if (voto == 0 || voto == 9)
        {
            if (voto == 0)
            {
                branco += 1;
            }else
                {
                    nulo += 1;
                }
        ++total;
        }else
            {
                puts ("O voto inserido é inválido!");
            }
        
         if(voto == -1)
            {
            break;
            }
    }
    
//Contagem de cada candidato, dos votos nulos, dos brancos e do total dos vostos.     
    printf("O numero total de votos é %d \n", total);
    printf("O candidato 1 tem %d votos \n", candidato1);
    printf("O candidato 2 tem %d votos \n", candidato2);
    printf("O candidato 3 tem %d votos \n", candidato3);
    printf("O candidato 4 tem %d votos \n", candidato4);
    printf("Tiveram %d votos nulos \n", nulo);
    printf("Tiveram %d votos em branco \n\", branco);
//Contagem da percentagem de cada candidado e dos vostos nulos e brancos.    
    printf("O candidato 1 tem %.2f%% votos \n", ((float)candidato1 / total)*100);
    printf("O candidato 2 tem %.2f%% votos \n", ((float)candidato2 / total)*100);
    printf("O candidato 3 tem %.2f%% votos \n", ((float)candidato3 / total)*100);
    printf("O candidato 4 tem %.2f%% votos \n", ((float)candidato4 / total)*100);
    printf("A percentagem de votos nulos foi de %.2f%% \n", ((float)nulo / total)*100);
    printf("A percentagem de votos em branco foi de %.2f%% \n", ((float)branco / total)*100);
    
    return (0);
}

