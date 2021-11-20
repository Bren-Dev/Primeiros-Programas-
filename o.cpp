/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas
e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada
linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B.*/

#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{

    ofstream myfileo;
    myfileo.open("zexample.txt", ios::app);

    int l = 8;
    int c = 6;
    double matriz_a[l][c], matriz_b[l], soma = 0;

    myfileo << "Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas" << endl
            << "e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada" << endl
            << "linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B." << endl;

    srand((unsigned)time(0));
    int maior = 10;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfileo << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfileo << endl;
    }

    for (int i = 0; i < l; i++)
    {
        matriz_b[i] = 0;
        for (int j = 0; j < c; j++)
        {
            matriz_b[i] += matriz_a[i][j];
        }
        soma += matriz_b[i];
    }

    myfileo << soma;
    myfileo << endl;
    myfileo.close();
    return 0;
}