#include <iostream>
#include "computadora.h"
#include "Laboratorio.h"
using namespace std;


int main(){
    Computadora PC1 = Computadora(2048, "Windows", "Intel", "Roberto");
    Computadora PC2;
    Computadora PC3 = Computadora(4096, "Mac", "Intel", "Carlos");
    Computadora PC4;

    PC2.setRAM(1024);
    PC2.setSO("Linux");
    PC2.setProcesador("AMD");
    PC2.setnombre_equipo("Amanda");
    
    PC4.setRAM(8192);
    PC4.setSO("Windows");
    PC4.setProcesador("AMD");
    PC4.setnombre_equipo("Armando");

    Laboratorio lab;
    lab.agregarComputadora(PC1);
    lab.agregarComputadora(PC2);
    lab.agregarComputadora(PC3);
    lab.agregarComputadora(PC4);

    lab.mostrar();
    
    
    //cout <<PC2.getRAM() <<endl;
    //cout <<PC2.getSO() <<endl;
    //cout <<PC2.getProcesador() <<endl;
    //cout <<PC2.getnombre_equipo() <<endl;

    //cout <<PC1.getRAM() <<endl;
    //cout <<PC1.getSO() <<endl;
    //cout <<PC1.getProcesador() <<endl;
    //cout <<PC1.getnombre_equipo() <<endl;

   return 0; 
}