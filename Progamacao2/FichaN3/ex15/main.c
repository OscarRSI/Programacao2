/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 2 de Novembro de 2017, 21:19
 */

#include <stdio.h>
#include <stdlib.h>

#define salario_min 557

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {

    int idade = 1, contar = 0, maior_idade = 0, menor_idade = 150; 
    int feminino_salario, estado_civil, masculino_casado ;
    double salario, conta_salario, salario_final, media_salario;
    char sexo;

    while (idade > 0) {

        printf("Pesquisa %d.\n", contar + 1);
//Idade
        do 
        {
            printf("Qual a sua idade \n");
            scanf("%d", &idade);
        } while (idade > 0 && !(idade >= 16 && idade <= 150));

        if (idade < 0) 
        {
            break;
        }
//Sexo
        limparBufferEntrada();

        do 
        {
            printf("Qual o sexo M OU F: \n");
            scanf("%c", &sexo);

            if (sexo == 'M' || sexo == 'm') 
                {
                    printf("Sexo Masculino \n");
                } else if (sexo == 'F' || sexo == 'f') 
                {
                    printf("Sexo Feminino \n");
                } else 
                {
                    printf("Opcao incorreta \n");
                }

            limparBufferEntrada();
        } while (!(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f'));
//Estado civil
        do 
        {
            printf("Estado civil: 1 Solteiro, 2 Casado, 3 Divorciado, 4 Viuvo \n");
            scanf("%d", &estado_civil);

            if (estado_civil == 1) 
            {
                printf("Solteiro \n");
            } else if (estado_civil == 2) 
            {
                printf("Casado \n");
            } else if (estado_civil == 3) 
            {
                printf("Divorciado \n");
            } else if (estado_civil == 4) 
            {
                printf("Viuvo \n");
            } else {
                printf("Opcao incorreta \n");
            }
            limparBufferEntrada();
        } while (!(estado_civil >= 1 && estado_civil <= 4));
//Salario
        do 
        {
            printf("Qual é o seu salário: \n");
            scanf("%lf", &salario);

            if (salario > salario_min) 
            {
                ++conta_salario;
                salario_final += salario;
            } else 
            {
                printf("Opcao incorreta (abaixo do salario minimo)\n");
            }
        } while (!(salario > salario_min));
//Maior e menor de idade
        if (idade > maior_idade) 
        {
            maior_idade = idade;
        }

        if (idade < menor_idade) 
        {
            menor_idade = idade;
        }
//Media dos salarios
        media_salario = salario_final / conta_salario;
//feminino com salário até 1500€
        if (sexo == 'F' || sexo == 'f' && salario <= 1500) 
        {
            ++feminino_salario;
        }
//sexo masculino, idade entre 18 e 35 e casados 
        if (sexo == 'M' || sexo == 'm' && idade >= 18 && idade <= 35 && estado_civil == 2)
        {
            ++masculino_casado;
        }
        limparBufferEntrada();
        ++contar;
    }

    printf("Maior idade %d \n", maior_idade);
    printf("Menor idade %d \n", menor_idade);
    printf("Media de salarios %.2lf€ \n", media_salario);
    printf("São %d as mulheres com ordenado até 1500€ \n", feminino_salario);
    printf("São %d os homens casados entre os 18 e 35 anos.", masculino_casado);

    return (0);
}