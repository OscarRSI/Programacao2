/* 
 * File:   main.c
 * Author: Oscar
 *
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int HoraChegada, MinChegada, HoraPartida, MinPartida, SegundosViagem, SegundosPartida = 0, SegundosChegada = 0;
    float DistanciaViagem, CombustivelGasto, VelocidadeMedia, HoraViagem, MinutosViagem, ConsumoMedio;
    
    puts("Computador de bordo");
    //Pede para introduzir o tempo da viagem, e efetua o seu calculo 
    printf("Introduza a sua hora de partida: ");
    scanf("%d", &HoraPartida);
    printf("Introduza os seus minutos de partida: ");
    scanf("%d", &MinPartida);
    SegundosPartida = HoraPartida * 3600;
    SegundosPartida += MinPartida * 60;
    printf("Introduza a sua hora de chegada: ");
    scanf("%d", &HoraChegada);
    printf("Introduza os seus minutos de chegada: ");
    scanf("%d", &MinChegada);
    SegundosChegada = HoraChegada * 3600;
    SegundosChegada += MinChegada * 60;
    //Pede ao utilizador para introduzir a distancia percorrida
    printf("Introduza a sua distância percorrida em Km: ");
    scanf("%f", &DistanciaViagem);
    //Pede ao utilizador para introduzir a quantidade de combustível
    printf("Insira a quantidade de combutível gasta em Litros: ");
    scanf("%f", &CombustivelGasto);
    //Vai calcular o tempo da viagem
    SegundosViagem = SegundosChegada - SegundosPartida;
    HoraViagem = SegundosViagem / 3600;
    MinutosViagem = (SegundosViagem - (3600 * HoraViagem)) / 60;
    //Vai calcular o consumo medio
    ConsumoMedio = CombustivelGasto / DistanciaViagem;
    //Vai calcular a velocidade media
    VelocidadeMedia = ((DistanciaViagem * 1000) / SegundosViagem) * 3.6;
    puts("");
    // Vai apresentar os dados finais da operacao
    printf("A viagem durou %.0f horas e %.0f minutos \n", HoraViagem, MinutosViagem);
    printf("O consumo médio foi de %.2f L/KM \n", ConsumoMedio);
    printf("A velocidade média foi %.1f km/h \n", VelocidadeMedia);

    return (EXIT_SUCCESS);
}

