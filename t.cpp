/*Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro linhas e
cinco colunas. A matriz A deve ser formada por valores divisíveis por 3 e 4, enquanto a
matriz B deve ser formada por valores divisíveis por 5 ou 6. As entradas dos valores nas
matrizes devem ser validadas pelo programa, e não pelo usuário. Construir e apresentar a
matriz C de mesma dimensão e número de elementos que contenha a subtração dos
elementos da matriz A em relação aos elementos da matriz B.*/

#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{

    ofstream myfilet;
    myfilet.open("zexample.txt", ios::app);

    int l = 4;
    int c = 5;
    int matriz_a[l][c], matriz_b[l][c], matriz_c[l][c];

    myfilet << "Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro linhas e" << endl
            << "cinco colunas. A matriz A deve ser formada por valores divisíveis por 3 e 4, enquanto a" << endl
            << "matriz B deve ser formada por valores divisíveis por 5 ou 6. As entradas dos valores nas" << endl
            << "matrizes devem ser validadas pelo programa, e não pelo usuário. Construir e apresentar a" << endl
            << "matriz C de mesma dimensão e número de elementos que contenha a subtração dos" << endl
            << "elementos da matriz A em relação aos elementos da matriz B." << endl;

    srand((unsigned)time(0));
    int maior = 100;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            do
            {
                matriz_a[i][j] = rand() % (maior - menor + 1) + menor;

            } while (matriz_a[i][j] % 3 != 0 || matriz_a[i][j] % 4 != 0);

            myfilet << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilet << endl;
    }

    myfilet << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            do
            {

                matriz_b[i][j] = rand() % (maior - menor + 1) + menor;
            } while (matriz_b[i][j] % 5 != 0 && matriz_b[i][j] % 6 != 0);

            myfilet << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }
        myfilet << endl;
    }

    myfilet << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_c[i][j] = matriz_a[i][j] - matriz_b[i][j];
            myfilet << "|" << matriz_c[i][j] << "|"
                    << "\t";
        }
        myfilet << endl;
    }

    myfilet << endl;
    myfilet.close();
    return 0;
}