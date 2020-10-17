#include "Laboratorio.h"
#include <fstream>
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
    cout << left;
    cout << setw(7) << "RAM";
    cout << setw(10) << "SO";
    cout << setw(12) << "Procesador";
    cout << setw(10) << "Nom.Equipo";
    cout << endl;
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout << c;
        //cout <<"RAM: "<<c.getRAM()<<endl;
        //cout <<"Sistema Operativo: "<<c.getSO()<<endl;
        //cout <<"Procesador: "<<c.getProcesador()<<endl;
        //cout <<"Nombre de la maquina: "<<c.getnombre_equipo()<<endl;
    }
}
void Laboratorio::respaldar_tabla(){
    ofstream archivo("Computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(7) << "RAM";
        archivo << setw(10) << "SO";
        archivo << setw(12) << "Procesador";
        archivo << setw(10) << "Nom.Equipo";
        archivo << endl;
        for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        archivo << c;
        }
    }
    archivo.close();
}
void Laboratorio::respaldar(){
    ofstream archivo("Computadoras.txt");
    if (archivo.is_open()){
        for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        archivo << c.getRAM() << endl;
        archivo << c.getSO() << endl;
        archivo << c.getProcesador() << endl;
        archivo << c.getnombre_equipo() << endl;
        }
    }
    archivo.close();
}
void Laboratorio::recuperar(){
    ifstream archivo("Computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int ram;
        Computadora c;

        while (true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            ram = stoi(temp);
            c.setRAM(ram);

            getline(archivo, temp);
          
            c.setSO(temp);

            getline(archivo, temp);
            c.setProcesador(temp);

            getline(archivo, temp);
            c.setnombre_equipo(temp);

            agregarComputadora(c);
        }
    }
    archivo.close();
}