#include <iostream>
#include "computadora.h"
using namespace std;


int main(){
    Computadora PC1 = Computadora(2048, "Windows", "Intel", "Armando");
    Computadora PC2;

    PC2.setRAM(1024);
    PC2.setSO("Linux");
    PC2.setProcesador("AMD");
    PC2.setnombre_equipo("Angel");
    cout <<PC2.getRAM() <<endl;
    cout <<PC2.getSO() <<endl;
    cout <<PC2.getProcesador() <<endl;
    cout <<PC2.getnombre_equipo() <<endl;

    cout <<PC1.getRAM() <<endl;
    cout <<PC1.getSO() <<endl;
    cout <<PC1.getProcesador() <<endl;
    cout <<PC1.getnombre_equipo() <<endl;

   return 0; 
}