/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete
elementos inteiros. Construir uma matriz C de duas dimensões, cuja primeira coluna deve
ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B.
Apresentar a matriz C.*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream myfileb;
    myfileb.open("zexample.txt", ios::app);

    int l = 7, c = 2;
    int matriz_a[l], matriz_b[l], matriz_c[l][c];

    myfileb << "Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete" << endl
    << "elementos inteiros. Construir uma matriz C de duas dimensões, cuja primeira coluna deve"<< endl
    << "ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B."<< endl
    << "Apresentar a matriz C." << endl;


    cout << "MATRIZ A" << endl;

    for (size_t i = 0; i < l; i++)
    {
        cout << "Digite o valor de [" << i << "]: ";
        cin >> matriz_a[i];
        myfileb << matriz_a[i];
    }
    myfileb << endl;

    cout << "MATRIZ B" << endl;

    for (size_t i = 0; i < l; i++)
    {
        cout << "Digite o valor de [" << i << "]: ";
        cin >> matriz_b[i];
        myfileb << matriz_b[i];
    }
    myfileb << endl;
    
    myfileb << "MATRIZ C" << endl;

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            if (j == 0)
            {
                matriz_c[i][j] = matriz_a[i];
            }

            if (j == 1)
            {
                matriz_c[i][j] = matriz_b[i];
            }

            myfileb << "|" << matriz_c[i][j] << "|"
                    << "\t";
        }
        myfileb << endl;
    }

    myfileb << endl;

    myfileb.close();
    return 0;
}
