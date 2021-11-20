/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a
matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes A
e B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/

#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{

    ofstream myfiles;
    myfiles.open("zexample.txt", ios::app);

    int l = 5;
    int c = 6;
    int matriz_a[l][c], matriz_b[l][c], matriz_c[l][c];

    myfiles << "Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com" << endl
            << "cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a" << endl
            << "matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes A" << endl
            << "e B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma" << endl
            << "dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da" << endl
            << "matriz B. Apresentar os elementos da matriz C." << endl;

    srand((unsigned)time(0));
    int maior = 10;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            do
            {
                matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            } while ((matriz_a[i][j] % 2 != 0));

            myfiles << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfiles << endl;
    }

    myfiles << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            do
            {
                matriz_b[i][j] = rand() % (maior - menor + 1) + menor;

            } while (matriz_b[i][j] % 2 == 0);
            myfiles << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }
        myfiles << endl;
    }

    myfiles << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
            myfiles << "|" << matriz_c[i][j] << "|"
                    << "\t";
        }
        myfiles << endl;
    }

    myfiles << endl;
    myfiles.close();
    return 0;
}