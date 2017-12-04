/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Novembro de 2017, 12:14
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void arrayA (int A[])
{
    int i;
    
    for (i = 0; i < MAX; ++i)
    {
        printf("Introduza o valor do array A: \n");
        scanf("%d", &A[i]);
    }
}

void arrayB (int B[])
{
    int i; 
    
    for ( i = 0; i < MAX; ++i)
    {
        printf("Introduza o valor do array B: \n");
        scanf("%d", &B[i]);
    }
}

void arrayC (int A[], int B[], int C[])
{
    int i;
    
    printf(" Valores vetor C: \n");
    
    for (i = 0; i < MAX; ++i)
    {
        C[i] = A[i] + B[i];
        printf(" %d ", C[i]);
    }
}

void arrayD (int A[], int B[], int D[])
{
    int i, j;
    int contador = 0, ContadorArray = 0;
    
    printf("\n Valores do vetor A, mas nao do vetor B: \n");
    
     for (i = 0; i < MAX; ++i) {
        for (j = 0; j < MAX; ++j) {
            if (A[i] == B[j]) {
                break;
            } else {
                ++contador;
            }
        }
        
        if (contador == MAX) {
            D[ContadorArray] = A[i];
            ++ContadorArray;
        }
        contador = 0;
    }

    for (i = 0; i < ContadorArray; ++i) 
    {
        printf("%d ", D[i]);
    }
} 

void arrayE (int A[], int B[], int E[])
{
    int i, j, l, contador = 0, ContadorArray = 0;
    
    printf("\n Valores repetidos no vetor A e vetor B: \n");
    for (i = 0; i < MAX; ++i)
      {
        for (j = 0; j < MAX; ++j)
          {
            if (A[i] == B[j])
              {
                for (l += i + 1; l < MAX; ++l)
                  {
                    if (A[i] == A[l])
                      {
                        ++contador;
                      }
                  }
                for (l = i + 1; l < MAX; ++l)
                  {
                    if (B[i] == B[l])
                      {
                        ++contador;
                      }
                  }
                if (contador == 0)
                  {
                    E[ContadorArray] = A[i];
                    ++ContadorArray;
                  } 
              }
          }
      }
    for (i = 0; i < ContadorArray; ++i)
      {
        printf(" %d ", E[i]);
      }
}
int main(int argc, char** argv) 
{    
   
    int i, A[MAX], B[MAX], C[MAX], D[MAX], E[MAX];
    
    arrayA (A);
    arrayB (B);
    arrayC (A, B, C);
    arrayD (A, B, D);
    arrayE (A, B, E);
    
    return (0);
}

