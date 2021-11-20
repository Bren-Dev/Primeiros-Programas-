/*Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e sete
colunas. Ao final, apresentar o total de elementos pares e ímpares existentes na matriz.
Apresentar também o percentual de elementos pares e ímpares em relação ao total de
elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares,
haveria 28,6% de elementos pares e 71,4% de elementos ímpares.*/

#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{

    ofstream myfilep;
    myfilep.open("zexample.txt", ios::app);

    int l = 10;
    int c = 7;
    int matriz_a[l][c], count = 0, count2 = 0;
    double porc1, porc2;

    myfilep << "Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e sete" << endl
            << "colunas. Ao final, apresentar o total de elementos pares e ímpares existentes na matriz." << endl
            << "Apresentar também o percentual de elementos pares e ímpares em relação ao total de" << endl
            << "elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares," << endl
            << "haveria 28,6% de elementos pares e 71,4% de elementos ímpares." << endl;

    srand((unsigned)time(0));
    int maior = 10;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilep << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfilep << endl;
    }

    myfilep << endl;

    myfilep << "Elementos pares: " << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz_a[i][j] % 2 == 0)
            {
                myfilep << "|" << matriz_a[i][j] << "|"
                        << "\t";
                count++;
            }
        }
        myfilep << endl;
    }

    myfilep << "Elementos impares: " << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz_a[i][j] % 2 != 0)
            {
                myfilep << "|" << matriz_a[i][j] << "|"
                        << "\t";
                count2++;
            }
        }
        myfilep << endl;
    }

    myfilep << endl;

    porc1 = count * 100 / 70;
    porc2 = count2 * 100 / 70;
    myfilep << count << " Elementos pares";
    myfilep << endl;
    myfilep << porc1 << "% eh par";
    myfilep << endl;
    myfilep << count2 << " Elementos impares";
    myfilep << endl;
    myfilep << porc2 << "% eh impar";
    myfilep << endl;
    myfilep.close();
    return 0;
}