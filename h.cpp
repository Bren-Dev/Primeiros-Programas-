/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco
linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento
seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores
situados na diagonal principal (posições B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]), os quais
devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a
matriz B.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfileh;
    myfileh.open("zexample.txt", ios::app);

    int l = 5;
    int c = 5;
    int matriz_a[l][c], matriz_b[l][c];

    myfileh << "Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco" << endl
            << "linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento" << endl
            << "seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores" << endl
            << "situados na diagonal principal (posições B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]), os quais" << endl
            << "devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B." << endl;

    srand((unsigned)time(0));
    int maior = 20;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfileh << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfileh << endl;
    }
    myfileh << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_b[i][j] = matriz_a[i][j] * 2;
            if (i == j)
            {
                matriz_b[i][j] = matriz_a[i][j] * 3;
            }

            myfileh << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }

        myfileh << endl;
    }

    myfileh << endl;

    myfileh.close();
    return 0;
}