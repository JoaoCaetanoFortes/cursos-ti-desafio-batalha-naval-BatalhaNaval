#include <stdio.h>
int main () 
{
    //Aqui declaro as minhas variáveis que vão decorrer por todo o meu tabuleiro
    int xnavioh = 5;
    int ynavioh = 2;
    int xnaviov = 2;
    int ynaviov = 7;


    /*Aqui minha matriz com os valore 0 para Água/Mar (Fiz manualmente justamente para preencher as
    guias de coordenadas dentro do proprio valor!)*/
    char * tabuleiromar[10][10] = 
        {   
            {" 1 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 2 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 3 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 4 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 5 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 6 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 7 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 8 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {" 9 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"},
            {"10 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0"}
        };

    //Um vetor para as guias de coordenadas
    char * letras[] = {"  ", " A", " B", " C", " D", " E", " F", " G", " H", " I", " J"};

        //Aqui os códigos para que na coordenada exata, os "0" se tornem "3"
        for(int i = 0; i < 3 ; i++)
        {
            tabuleiromar[xnavioh][ynavioh + i] = " 3";
        }
        for(int i = 0; i < 3 ; i++)
        {
            tabuleiromar[xnaviov + i][ynaviov] = " 3";
        }


    
    //Nessa parte criei esse loop para repetir todas os valore de "letras", que no caso são as guias    
    for (int i = 0; i <11; i++)
    {
        printf("%s", letras[i]);
    }

    //Agora imprimiremos o tabuleiro, já modificado para ter navios
    for(int y = 0; y < 10; y++)
        {
            printf("\n");
                for (int x = 0; x < 10; x++)
                {        
                    printf("%s", tabuleiromar[y][x]);
                }
        }
    
}


    