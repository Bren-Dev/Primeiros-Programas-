/*Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e sete
colunas. Ao final, apresentar o total de elementos pares existentes na matriz.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfilen;
    myfilen.open("zexample.txt", ios::app);

    int l = 7;
    int c = 7;
    int matriz_a[l][c], count = 0;

    myfilen << "Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e sete" << endl
            << "colunas. Ao final, apresentar o total de elementos pares existentes na matriz. " << endl;

    srand((unsigned)time(0));
    int maior = 30;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilen << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilen << endl;
    }
    myfilen << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (matriz_a[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }

    myfilen << count;
    myfilen << endl;
    myfilen.close();
    return 0;
}