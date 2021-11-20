/*Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos inteiros.
Construir uma matriz C de duas dimensões com três colunas, sendo a primeira coluna da
matriz C formada pelos elementos da matriz A somados com 5, a segunda coluna formada
pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A e a terceira e
última coluna pelos quadrados dos elementos correspondentes da matriz A. Apresentar a
matriz C.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

      ofstream myfiled;
     myfiled.open ("zexample.txt", ios::app);

    int l = 10, c = 3, matriz_a[l], matriz_c[l][c];


    myfiled << "Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos inteiros." << endl
    << "Construir uma matriz C de duas dimensões com três colunas, sendo a primeira coluna da"<< endl
    << "matriz C formada pelos elementos da matriz A somados com 5, a segunda coluna formada"<< endl
    << "pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A e a terceira e"<< endl
    << "última coluna pelos quadrados dos elementos correspondentes da matriz A. Apresentar a"<< endl
    << "matriz C." << endl;

    srand((unsigned)time(0));
    int maior = 10;
    int menor = 1;

    for (size_t i = 0; i < l; i++)
    {
        matriz_a[i] = rand() % (maior - menor + 1) + menor;
    }

    myfiled << "MATRIZ C" << endl;

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {

            if (j == 0)
            {
                matriz_c[i][j] = matriz_a[i] + 5;
            }

            if (j == 1)
            {
                matriz_c[i][j] = 1;
                for (int a = 1; a <= matriz_a[i]; a++)
                 matriz_c[i][j] *= a;
            }

            if (j == 2)
            {
                matriz_c[i][j] = matriz_a[i] * matriz_a[i];
            }

            myfiled << "|" << matriz_c[i][j] << "|"
                 << "\t";
        }
        myfiled << endl;
    }

myfiled << endl;

myfiled.close();
return 0;
}