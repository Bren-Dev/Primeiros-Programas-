/*
    Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco
linhas e cinco colunas. Apresentar o somatório dos elementos situados na diagonal principal
(posições A[1,1], A[2,2], A[3,3], A[4,4] e A[5,5]) da referida matriz.

*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfilek;
    myfilek.open("zexample.txt", ios::app);

    int l = 5;
    int c = 5;
    double matriz_a[l][c], valorf = 0;

    myfilek << "Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco" << endl
            << "linhas e cinco colunas. Apresentar o somatório dos elementos situados na diagonal principal" << endl
            << "(posições A[1,1], A[2,2], A[3,3], A[4,4] e A[5,5]) da referida matriz." << endl;

    srand((unsigned)time(0));
    int maior = 20;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilek << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilek << endl;
    }
    myfilek << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i == j)
            {
                valorf += matriz_a[i][j];
            }
        }
    }
    myfilek << "|" << valorf << "|"
            << "\t";
    myfilek << endl;
    myfilek.close();
    return 0;
}