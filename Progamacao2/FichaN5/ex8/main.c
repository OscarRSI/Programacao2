/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Novembro de 2017, 14:34
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

void VerificaPrimos (int Array[], int valor)
{
    int i;
    
    for (i = 0; i < MAX; ++i)
      {
        Array[i] = i;
      }
    for (i = 4; i < MAX; i = i + 2)
      {
        Array[i] = 0;
      }
    for ( i = 6; i < MAX; i = i + 3)
      {
        Array[i] = 0;
      }
    for (i = 10; i < MAX; i = i + 5)
      {
        Array[i] = 0;
      }
    for (i = 14; i < MAX; i = i + 7)
      {
        Array[i] = 0;
      }
    printf("Os numeros primos são: \n");
    
    for (i = 2; i < valor; ++i)
      {
        if (Array[i] != 0) 
          {
            printf(" %d ", Array[i]);
          }
      }
}

int main(int argc, char** argv) 
{

    int Array[MAX], valor;
    
    while(1)
    {
        printf("Introduza até o valor que deseja (Tem de ser inferior a 1000) \n");
        scanf("%d", &valor);
        
        if (valor <= MAX)
          {
            VerificaPrimos(Array, valor);
            break;
            
          }else 
              {
                printf("Ultrapassou o valor limite. \n");
                
              }
    }
    return (0);
}

