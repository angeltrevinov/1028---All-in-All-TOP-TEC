/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1028 - All in All Fecha: 8/feb Materia: TopTec
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

  ifstream file; //aqui guardo el archivo
  file.open("/Users/angel/Desktop/ITC/4 Semestre/Diseño de Algoritmos/TopTec/1028---All-in-All-TOP-TEC/file.txt");
  string normal, encrypted; //solo para leer el string y el encryptado
  do{
    file >> normal >> encrypted;
    if(normal.size() == encrypted.size()){//the strings size are equal thus they are not encrypted
      cout << "NO" << endl;
    }else{
      int pos = encrypted.find(normal);
      if(pos >= 0 && normal == encrypted.substr(pos, normal.size())){//esta encadenado
        cout << "YES" << endl;
      }else{
        int Arreglo[normal.size()];
        bool ordenados = true;
        for(int i = 0; i < normal.size(); i++){//para saber las posiciones del encryptado
          Arreglo[i] = encrypted.find(normal[i]);
        }
        for(int i = 0; i < normal.size()-1; i++){//para checar si estan bien organizados
          if(Arreglo[i] > Arreglo[i+1]){
            ordenados = false;
          }
        }
        if(!ordenados){
          cout << "NO" << endl;
        }else{
          cout<< "YES" << endl;
        }
      }
    }
  }while(!file.eof());//leee los ultimos dos strings dos veces

  return 0;
}
