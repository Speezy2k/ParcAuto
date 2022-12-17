#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NRCERINTE 3

typedef struct Masina
{
    char* marca;
    char *model;
    char tokenMasina[11];
    int pretAchizitie;
    int pretVanzare;
}Masina;

int main(int argc, char *argv[])
{
    
    FILE *Cerinte = fopen("cerinte.in" , "r");
    if(Cerinte == NULL)
    {
        printf("Could not open the file! \n");
        return 1;
    }
    for(int i = 0 ; i < NRCERINTE ; i++)
        fscanf(Cerinte , "%c" , argv[i + 1]);
}