/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12
elementos reais. Construir uma matriz C de duas dimensões, sendo a primeira coluna da
matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna
formada pelos elementos da matriz B subtraídos de 5. Apresentar separadamente as
matrizes.*/


#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main(){

      ofstream myfilee;
  myfilee.open ("zexample.txt", ios::app);

int l=12, c=2;
double matriz_a[l], matriz_b[l], matriz_c[l][c];

myfilee << "Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12" << endl
    << "elementos reais. Construir uma matriz C de duas dimensões, sendo a primeira coluna da"<< endl
    << "matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna"<< endl
    << "formada pelos elementos da matriz B subtraídos de 5. Apresentar separadamente as matrizes."<< endl;


  srand((unsigned)time(0));
    int maior = 10;
    int menor = 1;

    for (int i = 0; i < l; i++)
    {
        matriz_a[i] = rand() % (maior - menor + 1) + menor;
        matriz_b[i] = rand() % (maior - menor + 1) + menor;
    }


for (int i = 0; i < l; i++)
{
    for (int j = 0; j < c; j++)
    {
       if (j==0)
       {
           matriz_c[i][j]=matriz_a[i]*2;
       }
       
       if (j==1)
       {
           matriz_c[i][j]=matriz_b[i]-5;
       }
       
        myfilee << "|" << matriz_c[i][j] << "|"<< "\t";
    }
    
    myfilee << endl;

}
myfilee << endl;

   myfilee.close();
return 0;

}
