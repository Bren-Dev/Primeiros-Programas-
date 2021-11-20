/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e três colunas para valores inteiros. Construir uma matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{

    ofstream myfilea;
    myfilea.open("zexample.txt", ios::app);

    int l = 5;
    int c = 3;
    int matriz_a[l][c], matriz_b[l][c], matriz_c[l][c];

    myfilea << "Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com" << endl
            <<  "cinco linhas e três colunas para valores inteiros. Construir uma matriz C de mesma" << endl
            <<   "dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da" << endl
            <<   "matriz B. Apresentar os elementos da matriz C.\n" << endl ;

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cout << "Digite o valor de [" << i << "][" << j << "]: ";
            cin >> matriz_a[i][j];
            myfilea << matriz_a[i][j];
        }
    }
    myfilea << endl;
    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cout << "Digite o valor de [" << i << "][" << j << "]";
            cin >> matriz_b[i][j];
            myfilea << matriz_b[i][j];
        }
    }
    myfilea << endl;
    cout << "O valor da matriz 'c' eh:" << endl;

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
            myfilea << "|" << matriz_c[i][j] << "|"
                    << "\t";
        }

        myfilea << endl;
    }

    myfilea << endl;

    myfilea.close();
    return 0;
}