/*Elaborar um programa que leia uma matriz A de duas dimensões com seis linhas e cinco
colunas. Construir a matriz B de mesma dimensão, que deve ser formada do seguinte modo:
para cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz
A deve ser subtraído 4. Apresentar ao final as matrizes A e B.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfilej;
    myfilej.open("zexample.txt", ios::app);

    int l = 6;
    int c = 5;
    int matriz_a[l][c], matriz_b[l][c];

    myfilej << "Elaborar um programa que leia uma matriz A de duas dimensões com seis linhas e cinco" << endl
            << "colunas. Construir a matriz B de mesma dimensão, que deve ser formada do seguinte modo:" << endl
            << "para cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz" << endl
            << "A deve ser subtraído 4. Apresentar ao final as matrizes A e B." << endl;

    srand((unsigned)time(0));
    int maior = 80;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilej << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilej << endl;
    }
    myfilej << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz_a[i][j] % 2 == 0)
            {
                matriz_b[i][j] = matriz_a[i][j] + 5;
            }

            else
            {
                matriz_b[i][j] = matriz_a[i][j] - 4;
            }

            myfilej << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }
        myfilej << endl;
    }

    myfilej << endl;

    myfilej.close();
    return 0;
}