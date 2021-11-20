/*Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com quatro
elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha
formada pelo dobro dos valores dos elementos da matriz A, a segunda linha formada pelo
triplo dos valores dos elementos da matriz B, a terceira linha formada pelo quádruplo dos
valores dos elementos da matriz C e a quarta linha formada pelo fatorial dos valores dos
elementos da matriz D. Apresentar a matriz E.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfiler;
    myfiler.open("zexample.txt", ios::app);

    int l = 4;
    int c = 4;
    int matriz_a[l], matriz_b[l], matriz_c[l], matriz_d[l], matriz_e[l][c];

    myfiler << "Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com quatro" << endl
            << "elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha" << endl
            << "formada pelo dobro dos valores dos elementos da matriz A, a segunda linha formada pelo" << endl
            << "triplo dos valores dos elementos da matriz B, a terceira linha formada pelo quádruplo dos" << endl
            << "valores dos elementos da matriz C e a quarta linha formada pelo fatorial dos valores dos" << endl
            << "elementos da matriz D. Apresentar a matriz E." << endl;

    srand((unsigned)time(0));
    int maior = 10;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {

        matriz_a[i] = rand() % (maior - menor + 1) + menor;
        matriz_b[i] = rand() % (maior - menor + 1) + menor;
        matriz_c[i] = rand() % (maior - menor + 1) + menor;
        matriz_d[i] = rand() % (maior - menor + 1) + menor;
    }
    for (int i = 0; i < l; i++)
    {

        myfiler << "|" << matriz_a[i] << "|"
                << "\t";
    }
    myfiler << endl;
    myfiler << endl;
    for (int i = 0; i < l; i++)
    {

        myfiler << "|" << matriz_b[i] << "|"
                << "\t";
    }
    myfiler << endl;
    myfiler << endl;

    for (int i = 0; i < l; i++)
    {

        myfiler << "|" << matriz_c[i] << "|"
                << "\t";
    }
    myfiler << endl;
    myfiler << endl;

    for (int i = 0; i < l; i++)
    {

        myfiler << "|" << matriz_d[i] << "|"
                << "\t";
    }
    myfiler << endl;
    myfiler << endl;

    for (int i = 0; i < l; i++)
    {

        for (int j = 0; j < c; j++)
        {
            matriz_e[i][j] = 0;

            if (i == 0)
            {
                matriz_e[i][j] = matriz_a[j] + matriz_a[j];
                myfiler << "|" << matriz_e[i][j] << "|"
                        << "\t";
            }

            if (i == 1)
            {
                matriz_e[i][j] = matriz_b[j] * 3;
                myfiler << "|" << matriz_e[i][j] << "|"
                        << "\t";
            }

            if (i == 2)
            {
                matriz_e[i][j] = matriz_c[j] * 4;
                myfiler << "|" << matriz_e[i][j] << "|"
                        << "\t";
            }

            if (i == 3)
            {
                matriz_e[i][j] = 1;
                for (int a = 1; a <= matriz_d[j]; a++)
                    matriz_e[i][j] *= a;
                myfiler << "|" << matriz_e[i][j] << "|"
                        << "\t";
            }
        }
        myfiler << endl;
    }
    myfiler << endl;
    myfiler.close();
    return 0;
}