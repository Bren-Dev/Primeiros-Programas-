/*Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro
colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial
de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes
A e B.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfilef;
    myfilef.open("zexample.txt", ios::app);

    int l = 5;
    int c = 4;
    int matriz_a[l][c], matriz_b[l][c];


    myfilef << "Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro" << endl
    << "colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial" << endl
    << "de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes" << endl
    << "A e B." << endl;

    srand((unsigned)time(0));
    int maior = 5;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilef << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilef << endl;
    }
    myfilef << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_b[i][j] = 1;
            for (int a = 1; a <= matriz_a[i][j]; a++)
                matriz_b[i][j] *= a;
            myfilef << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }
        myfilef << endl;
    }

    myfilef << endl;

    myfilef.close();
    return 0;
}
