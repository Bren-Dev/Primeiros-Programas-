/*Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que
essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a
matriz.*/

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{

  ofstream myfilec;
  myfilec.open("zexample.txt", ios::app);

  int l = 4, c = 5, matriz[l][c];

 myfilec << "Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que" << endl
  <<  "essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a" << endl
  <<  "matriz." << endl;

  srand((unsigned)time(0));
  int maior = 99;
  int menor = 10;

  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      matriz[i][j] = rand() % (maior - menor + 1) + menor;

      myfilec << "|" << matriz[i][j] << "|"
              << "\t";
    }
    myfilec << endl;
  }
  myfilec << endl;

  myfilec.close();
  return 0;
}
