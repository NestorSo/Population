#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    int CantidadInicial = 0;
    int CantidadFinal = 0;
    int n = 0, i = 0;
    int LlamasFallecidas = 0;
    int LlamasQueNacen = 0;

    // TODO: Prompt for start size

    do
    {
        CantidadInicial = get_int("Digite la cantidad inicial de la poblacion de llamas \n");
    }
    while (CantidadInicial < 9);
    do
    {
        CantidadFinal = get_int("Digite la cantidad Final de la poblacion de llamas \n");
    }
    while (CantidadFinal < CantidadInicial);

    // TODO: Prompt for end size
    // Llamas que nacen y mueren cada año
    printf("Calculando los años \n");

    for (n = 0; CantidadInicial < CantidadFinal; n++)
    {
        LlamasQueNacen = CantidadInicial / 3;
        LlamasFallecidas = CantidadInicial / 4;
        CantidadInicial = CantidadInicial + LlamasQueNacen - LlamasFallecidas;
    }


    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
    printf("Years: %d \n ", n);
    return 0;
}
