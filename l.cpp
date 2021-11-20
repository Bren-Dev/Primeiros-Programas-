/*Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15
colunas. Apresentar o somatório dos elementos pares situados na diagonal principal da
referida matriz.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

  ofstream myfilel;
  myfilel.open("zexample.txt", ios::app);

  int l = 15;
  int c = 15;
  int matriz_a[l][c], valorf = 0;

  myfilel << "Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15" << endl
          << "colunas. Apresentar o somatório dos elementos pares situados na diagonal principal da" << endl
          << "referida matriz." << endl;

  srand((unsigned)time(0));
  int maior = 20;
  int menor = 1;

  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
      myfilel << "|" << matriz_a[i][j] << "|"
              << "\t";
    }
    myfilel << endl;
  }
  myfilel << endl;

  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (i == j && matriz_a[i][j] % 2 == 0)
      {
        valorf += matriz_a[i][j];
      }
    }
  }
  myfilel << "|" << valorf << "|"
          << "\t";
  myfilel << endl;
  myfilel.close();
  return 0;
}