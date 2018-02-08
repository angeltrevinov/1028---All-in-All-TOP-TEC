/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1028 - All in All Fecha: 8/feb Materia: TopTec
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

  ifstream file;
  file.open("/Users/angel/Desktop/ITC/4 Semestre/Diseño de Algoritmos/TopTec/1028---All-in-All-TOP-TEC/file.txt");
  string text;
  file >> text;
  cout << "archivo " << text << endl ;

  return 0;
}
