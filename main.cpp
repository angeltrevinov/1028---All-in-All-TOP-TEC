/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1028 - All in All Fecha: 8/feb Materia: TopTec
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool Encryption(string normal, string encrypted){

      int Posicion = 0;
      for(int i = 0; i< normal.size(); i++){
        Posicion = encrypted.find(normal[i], Posicion);
        if(Posicion < 0){
          return false;
        }
        Posicion++;
      }
      return true;
}

int main(){
    int Espacio;
    string normal, encrypted; //solo para leer el string y el encryptado
    vector<bool> Respuestas;
    while((getline(cin,normal, ' ') && getline(cin, encrypted))){
      if(Encryption(normal, encrypted)){
         Respuestas.push_back(1);
      }else{
         Respuestas.push_back(0);
       }
    }

     for(int i = 0; i < Respuestas.size(); i++){
         if(Respuestas[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
     }
    return 0;
  }
