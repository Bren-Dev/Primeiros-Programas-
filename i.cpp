/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete
linhas e sete colunas. Construir a matriz B de mesma dimensão, em que cada elemento seja
o somatório de 1 até o valor armazenado na posição da matriz A, com exceção dos valores
situados nos índices ímpares da diagonal principal (B[1,1], B[3,3], B[5,5]), os quais
devem ser o fatorial de cada elemento correspondente da matriz A. Apresentar ao final a
matriz B.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfilei;
    myfilei.open("zexample.txt", ios::app);

    int l = 7;
    int c = 7;
    int matriz_a[l][c], matriz_b[l][c];

    myfilei << "Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete" << endl
            << "linhas e sete colunas. Construir a matriz B de mesma dimensão, em que cada elemento seja" << endl
            << "o somatório de 1 até o valor armazenado na posição da matriz A, com exceção dos valores" << endl
            << "situados nos índices ímpares da diagonal principal (B[1,1], B[3,3], B[5,5]), os quais" << endl
            << "devem ser o fatorial de cada elemento correspondente da matriz A. Apresentar ao final a matriz B." << endl;

    srand((unsigned)time(0));
    int maior = 7;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilei << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilei << endl;
    }
    myfilei << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j && i % 2 != 0)
            {

                matriz_b[i][j] = 1;
                for (int a = 1; a <= matriz_a[i][j]; a++)
                    matriz_b[i][j] *= a;
            }
            else
            {

                matriz_b[i][j] = 0;
                for (int a = 1; a <= matriz_a[i][j]; a++)
                    matriz_b[i][j] += a;
            }
            myfilei << "|" << matriz_b[i][j] << "|"
                    << "\t";
        }
        myfilei << endl;
    }

    myfilei << endl;

    myfilei.close();
    return 0;
}