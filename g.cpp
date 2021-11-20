/*Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco
colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius.
Construir a matriz B de mesma dimensão, em que cada elemento seja o valor da
temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar
ao final as matrizes A e B.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfileg;
    myfileg.open("zexample.txt", ios::app);

    int l = 4, c = 5;
    int matriz_a[l][c], matriz_b[l][c];

    myfileg << "Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco" << endl
            << "colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius." << endl
            << "Construir a matriz B de mesma dimensão, em que cada elemento seja o valor da" << endl
            << "temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar" << endl
            << "ao final as matrizes A e B. " << endl;

    srand((unsigned)time(0));
    int maior = 80;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfileg << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfileg << endl;
    }
    myfileg << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_b[i][j] = matriz_a[i][j] * 1.8 + 32;
            myfileg << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }
        myfileg << endl;
    }

    myfileg << endl;

    myfileg.close();
    return 0;
}