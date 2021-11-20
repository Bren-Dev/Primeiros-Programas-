/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco
linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha
e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfilem;
    myfilem.open("zexample.txt", ios::app);

    int l = 5;
    int c = 5;
    double matriz_a[l][c], ValorF;

    myfilem << "Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco" << endl
            << "linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha" << endl
            << "e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz." << endl;

    srand((unsigned)time(0));
    int maior = 30;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilem << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilem << endl;
    }
    myfilem << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i == j && i % 2 != 0)
            {
                ValorF += matriz_a[i][j];
            }
        }
    }

    myfilem << "|" << ValorF << "|"
            << "\t";
    myfilem << endl;
    myfilem.close();
    return 0;
}
