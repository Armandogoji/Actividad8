#ifndef COMPUTADORA_H   
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora {
    private:
    int RAM;
    string SO;
    string Procesador;
    string nombre_equipo;
    public:
    Computadora();
    Computadora(int RAM, const string &SO, 
    const string &Procesador, const string &nombre_equipo);
    void setRAM(int r);
    void setSO(const string &s);
    void setProcesador(const string &p);
    void setnombre_equipo(const string &n);
    int getRAM();
    string getSO();
    string getProcesador();
    string getnombre_equipo();
};

#endif