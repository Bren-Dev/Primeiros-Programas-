/*Elaborar um programa que faça a leitura de duas matrizes A e B de duas dimensões com
cinco linhas e cinco colunas. A matriz A deve ser formada por valores que não sejam
divisíveis por 3, enquanto a matriz B deve ser formada por valores que não sejam divisíveis
por 6. As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo
usuário. Construir e apresentar uma matriz C de mesma dimensão e número de elementos
que contenha a soma dos elementos das matrizes A e B.*/

#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{

    ofstream myfilev;
    myfilev.open("zexample.txt", ios::app);

    int l = 5;
    int c = 5;
    int matriz_a[l][c], matriz_b[l][c], matriz_c[l][c];

    srand((unsigned)time(0));
    int maior = 100;
    int menor = 1;

    for (int i = 0; i < c; i++)
    {

        for (int j = 0; j < l; j++)
        {

            do
            {
                matriz_a[i][j] = rand() % (maior - menor + 1) + menor;

            } while (matriz_a[i][j] % 3 == 0);
            myfilev << "|" << matriz_a[i][j] << "|"
                   << "\t";
        }
        myfilev << endl;
    }

    myfilev << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            do
            {
                matriz_b[i][j] = rand() % (maior - menor + 1) + menor;
            } while (matriz_b[i][j] % 6 == 0);

            myfilev << "|" << matriz_b[i][j] << "|"
                   << "\t";
        }
        myfilev << endl;
    }

    myfilev << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
            myfilev << "|" << matriz_c[i][j] << "|"
                   << "\t";
        }
        myfilev << endl;
    }

     myfilev << endl;

    myfilev.close();
    return 0;
}