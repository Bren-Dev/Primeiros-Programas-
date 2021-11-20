/*Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A de duas
dimensões com quatro linhas e cinco colunas. Construir a matriz B de uma dimensão para
quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada
linha da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que
seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao
final, o programa deve apresentar o somatório dos elementos da matriz B com o somatório
dos elementos da matriz C.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

    ofstream myfileq;
    myfileq.open("zexample.txt", ios::app);

    int l = 4;
    int c = 5;
    int matriz_a[l][c], matriz_b[l], matriz_c[c], soma = 0;

    myfileq << "Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A de duas" << endl
            << "dimensões com quatro linhas e cinco colunas. Construir a matriz B de uma dimensão para" << endl
            << "quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada" << endl
            << "linha da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que" << endl
            << "seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao" << endl
            << "final, o programa deve apresentar o somatório dos elementos da matriz B com o somatório" << endl
            << "dos elementos da matriz C" << endl;

    srand((unsigned)time(0));
    int maior = 22;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfileq << "|" << matriz_a[i][j] << "|"
                    << "\t";
        }
        myfileq << endl;
    }
    myfileq << endl;

    for (int i = 0; i < l; i++)
    {
        matriz_b[i] = 0;
        for (int j = 0; j < c; j++)
        {
            matriz_b[i] += matriz_a[i][j];
        }
        soma += matriz_b[i];
    }

    for (int i = 0; i < c; i++)
    {
        matriz_c[i] = 0;
        for (int j = 0; j < l; j++)
        {
            matriz_c[i] += matriz_a[j][i];
        }
        soma += matriz_c[i];
    }

    myfileq << soma;

    myfileq << endl;
    myfileq.close();
    return 0;
}