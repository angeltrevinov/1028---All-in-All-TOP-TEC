/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1028 - All in All Fecha: 8/feb Materia: TopTec
*/

#include <iostream>
//#include <fstream>
#include <string>

using namespace std;

int main(){
    int Espacio;
    string completo, normal, encrypted; //solo para leer el string y el encryptado
    while(getline(cin, completo)){
      Espacio = completo.find(" ");//encuentra la separacion de los dos strings
      normal = completo.substr(0, Espacio);//remueve el primer strings
      encrypted = completo.substr(Espacio);//remueve el ultimo string
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
    }
    return 0;
  }
