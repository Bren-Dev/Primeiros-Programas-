/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensoes com cinco
linhas e cinco colunas. Construir uma matriz B de mesma dimensao, em que cada elemento
seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores
situados na diagonal inversa (posições B[0,4], B[1,3], B[2,2], B[3,1] e B[4,0]), os quais devem
ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.*/


#include <iostream>
#include <fstream>
#include <time.h>


using namespace std;

int main()
{

  ofstream myfilew;
  myfilew.open ("zexample.txt", ios::app);

    int l = 5;
    int c = 5;
    int matriz_a[l][c], matriz_b[l][c];

    srand((unsigned)time(0));
    int maior = 20;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz_a[i][j] = rand() % (maior - menor + 1) + menor;
            myfilew << "|" << matriz_a[i][j] << "|"
                 << "\t";
        }
        myfilew << endl;
    }
    myfilew << endl;


    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {

           if (i+j==l-1)
           {
               matriz_b[i][j]=matriz_a[i][j]*3;
           }else{
               matriz_b[i][j]=matriz_a[i][j]*2;
           }
            
        myfilew << "|" << matriz_b[i][j] << "|"
                 << "\t";

        }
       myfilew << endl;
    }
     myfilew << endl;

   myfilew.close();
return 0;
}
