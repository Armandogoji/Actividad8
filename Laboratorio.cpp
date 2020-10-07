#include "Laboratorio.h"

Laboratorio::Laboratorio(){
    cont = 0;
}
void Laboratorio::agregarComputadora(const Computadora &c){
    if(cont < 5){
        arreglo[cont] = c;
        cont ++;
    }
    else{
        cout <<"El arreglo esta lleno"<<endl;
    }
}

void Laboratorio::mostrar(){
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout <<"RAM: "<<c.getRAM()<<endl;
        cout <<"Sistema Operativo: "<<c.getSO()<<endl;
        cout <<"Procesador: "<<c.getProcesador()<<endl;
        cout <<"Nombre de la maquina: "<<c.getnombre_equipo()<<endl;
    }
}